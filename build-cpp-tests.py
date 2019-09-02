#!/usr/bin/python

# tz.js - Library for working with timezones in JavaScript

# Written in 2011 by L. David Baron <dbaron@dbaron.org>

# To the extent possible under law, the author(s) have dedicated all
# copyright and related and neighboring rights to this software to the
# public domain worldwide.  This software is distributed without any
# warranty.
#
# You should have received a copy of the CC0 Public Domain Dedication
# along with this software.  If not, see
# <http://creativecommons.org/publicdomain/zero/1.0/>.

# This script converts the compiled time zone data from the Olson time
# zone database (http://www.twinsun.com/tz/tz-link.htm), which is
# generated from the tzdata* data using the tzcode* code, and
# distributed on many Unix-ish operating systems in /usr/share/zoneinfo,
# into a JSON format suitable for inclusion in the tz.js JavaScript
# library.

import sys
import imp
import os.path
import subprocess
import re
import math
import tempfile
import random

__all__ = [
    "output_tests"
]

START_YEAR = 1970
STOP_YEAR = 2050
STOP_SECS = 2524608000 # 2050, in seconds since the epoch

os.environ["LC_ALL"] = "C"
os.environ["LC_TIME"] = "C"

PREFIX = """// This code is generated automatically using generate-cpp-test.py generator from tz.js fork

#include "tzcpp.h"

#include <iostream>
#include <exception>

using namespace tzcpp;
static int fail_count = 0;
static int pass_count = 0;

inline void print_all() {
}

template <typename F, typename...T>
inline void print_all(F&& first, T&&...res) {
    std::cerr << first;
    print_all(std::forward<T>(res)...);
}

template <typename...T>
int check(bool cond, T&&...args) {
    if (cond) {
        ++pass_count;
    } else {
        ++fail_count;
        print_all("Error: ", std::forward<T>(args)...);
        std::cerr << std::endl;
    }
}

void check_offset(std::string zone, int64_t d, int64_t utcoff, std::string abbr) {
    auto z = get_timezone(zone, d);
    check(z.offset == utcoff, "invalid offset ", zone, " at ", d, " [", z.offset, " != ", utcoff, "]");
    check(z.abbr == abbr, "invalid abbreviation ", zone, " at ", d, " [", z.abbr, " != ", abbr, "]");
}

void check_tz();
int main() {
    try {
        check_tz();
        std::cout << "OK COUNT: " << pass_count << std::endl;
        std::cout << "FAIL COUNT: " << fail_count << std::endl;
    } catch (const std::runtime_error& err) {
        std::cerr << "FAILED: " << err.what() << std::endl;
        return 1;
    }
    return 0;
}

void check_tz() {
"""

generate_zones = imp.load_source("compiled_to_json",
                                 os.path.join(os.path.dirname(__file__),
                                              "compiled-to-json.py")
                                 ).generate_zones

def output_tests(source_prefix, zdump_command, io):
    all_zones = list(generate_zones(source_prefix))

    io.write(PREFIX)

    def output_check_offset(zone, d, utcoff, abbr):
        if random.randrange(100) > 7:
            return
        io.write("check_offset(\"{0}\", {1}, {2}, \"{3}\");\n" \
                   .format(zone, d, utcoff, abbr));

    date_zone_re = re.compile("^([^ ]*) ([+-])(\d{2}):(\d{2}):(\d{2})$")
    def write_expected(time):
        return "@" + str(math.trunc(time))
    def read_expected(dateprocess):
        (abbr, sign, hours, mins, secs) = date_zone_re.match(
            dateprocess.stdout.readline().rstrip("\n")).groups()
        utcoff = ((sign == "+") * 2 - 1) * \
                 (3600 * int(hours) + 60 * int(mins) + int(secs))
        return (utcoff, abbr)
    def expected_for(zone, time):
        date_process = subprocess.Popen(['date',
                                         '--date=' + write_expected(time),
                                         '+%Z %::z'],
                                        stdout = subprocess.PIPE,
                                        env={"TZ": os.path.join(source_prefix, zone)})
        result = read_expected(date_process)
        date_process.stdout.close()
        return result

    io.write("""
/*
 * Generate tests based on all the transitions shown by zdump for each zone.
 */
""")

    sys.stderr.write("Preparing to build transition tests.\n")

    date_process = subprocess.Popen(['date',
                                     '--date=' + str(STOP_YEAR) +
                                     '-01-01 00:00:00 UTC', '+%s'],
                                    stdout = subprocess.PIPE)
    stop_d = int(date_process.stdout.read().rstrip("\n"))
    date_process.stdout.close()
    def zdump_for(zone):
        zdump = subprocess.Popen([zdump_command,
                                  '-v',
                                  '-c', str(START_YEAR) + "," + str(STOP_YEAR),
                                  zone],
                                 stdout=subprocess.PIPE)
        zdump_re = re.compile("^" + zone + "  ([^=]+) = ([^=]+) isdst=([01]) gmtoff=(-?\d+)$")
        for line in zdump.stdout:
            line = line.rstrip("\n")
            if line.endswith(" = NULL"):
                continue
            yield zdump_re.match(line).groups()
    # FIXME: spread this across cores
    zdumps = [(zone, list(zdump_for(zone))) for zone in all_zones]
    # Write all the dates to one file and run them through a single
    # date process, for speed.
    datefile = tempfile.NamedTemporaryFile(delete=False)
    for (zone, zdump) in zdumps:
        for (date_utc, date_loc, isdst, utcoff) in zdump:
            datefile.write(date_utc + "\n")
    datefile.close()
    date_process = subprocess.Popen(['date',
                                     '--file=' + datefile.name, '+%s'],
                                    stdout = subprocess.PIPE,
                                    env={"TZ": "UTC"})
    prev_zone = None
    for (zone, zdump) in zdumps:
        if zone != prev_zone:
            prev_zone = zone
            sys.stderr.write("Building transition tests for zone " + zone + "\n")
        def output_test(d, utcoff, abbr):
            output_check_offset(zone, d, utcoff, abbr)
        first = True
        first_after_1970 = True
        prev_utcoff = None
        prev_abbr = None
        for (date_utc, date_loc, isdst, utcoff) in zdump:
            isdst = bool(isdst) # not really needed
            utcoff = int(utcoff)
            d = int(date_process.stdout.readline().rstrip("\n"))
            abbr = date_loc.split(" ")[-1]
            if d >= 0:
                if first_after_1970 and d != 0 and not first:
                    output_test(0, prev_utcoff, prev_abbr)
                if first and d > 0:
                    output_test(0, utcoff, abbr)
                output_test(d, utcoff, abbr)
                first_after_1970 = False
            first = False
            prev_utcoff = utcoff
            prev_abbr = abbr
        if first:
            # This zone (Pacific/Johnston) has no transitions, but we
            # can still test it.
            (prev_utcoff, prev_abbr) = expected_for(zone, 0)
        if first_after_1970:
            output_test(0, prev_utcoff, prev_abbr)
        output_test(stop_d, prev_utcoff, prev_abbr)
    date_process.stdout.close()
    os.unlink(datefile.name)
    io.write("""

/*
 * Generate a fixed set of random tests using a linear-congruential
 * PRNG.  This does a good bit of testing of the space in a random way,
 * but uses a fixed random seed to always get the same set of tests.
 * See http://en.wikipedia.org/wiki/Linear_congruential_generator (using
 * the numbers from Numerical Recipes).
 *
 * And while we're here, toss in some tests for midnight boundaries
 * around the new year.
 */
""")
    def lc_prng(): # a generator
        # a randomly (once) generated number in [0,2^32)
        rand_state = 1938266273;
        while True:
            yield 1.0 * rand_state / 0x100000000 # value in [0,1)
            rand_state = ((rand_state * 1664525) + 1013904223) % 0x100000000

    prng = lc_prng()
    def random_time():
        # pick a random time in 1970...STOP_SECS.  Use two random
        # numbers so we use the full space, random down to the
        # millisecond.
        time = (prng.next() * STOP_SECS) + (prng.next() * 0x100000000 / 1000)
        time = time % STOP_SECS
        time = math.floor(time * 1000) / 1000
        return time
    def midnight_rule_time(i):
        # return 2049-12-31 00:30 UTC + i hours
        return 2524523400 + 3600 * i
    # For each time zone, we make 100 random tests, and some additional
    # tests.  Do each zone together so that we can easily use a single
    # date process for each zone.
    for zone in all_zones:
        sys.stderr.write("Building tests for zone " + zone + "\n")
        # 100 random tests, then specifically test 48 hours around new
        # years 2050 to test rule edge cases
        test_times = [random_time() for i in range(100)] + \
                     [midnight_rule_time(i) for i in range(48)]
        # Write all the dates to one file and run them through a single
        # date process, for speed.
        datefile = tempfile.NamedTemporaryFile(delete=False)
        for time in test_times:
            datefile.write(write_expected(time) + "\n")
        datefile.close()
        # FIXME: This is using the system's date command, which might
        # not be compatible with the timezone data it's being given.
        # (For example, if you have a system date command that doesn't
        # understand version 3 timezone file formats, you'll fail some
        # post-2038 tests for America/Godthab.)
        date_process = subprocess.Popen(['date',
                                         '--file=' + datefile.name,
                                         '+%Z %::z'],
                                        stdout = subprocess.PIPE,
                                        env={"TZ": os.path.join(source_prefix, zone)})
        for time in test_times:
            (utcoff, abbr) = read_expected(date_process)
            output_check_offset(zone, time, utcoff, abbr)
        date_process.stdout.close()
        os.unlink(datefile.name)

    io.write("}\n")

if __name__ == '__main__':
    op = OptionParser()
    (options, args) = op.parse_args()

    if len(args) == 2:
        output_tests(args[0], args[1], sys.stdout)
    else:
        op.error("expected three arguments (zoneinfo directory, zdump command)")

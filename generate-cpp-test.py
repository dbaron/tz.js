#!/usr/bin/env python

import pytz
import time
import random
import datetime

MINUTE = 60
HOUR = 60 * MINUTE
DAY = 24 * HOUR
YEAR = 365 * DAY

EPOCH = datetime.datetime.utcfromtimestamp(0)

def from_utc(z, t):
    dt = datetime.datetime.utcfromtimestamp(t)
    dt = z.fromutc(dt)
    dt = datetime.datetime(dt.year, dt.month, dt.day, dt.hour, dt.minute, dt.second)
    return int((dt - EPOCH).total_seconds())

def from_local(z, t):
    dt = datetime.datetime.utcfromtimestamp(t)
    dt = z.localize(dt)
    dt = datetime.datetime(dt.year, dt.month, dt.day, dt.hour, dt.minute, dt.second)

    return int((dt - EPOCH).total_seconds())

PREFIX = """// This code is generated automatically using generate-cpp-test.py generator from tz.js fork

#include "tzcpp.h"

#ifdef USE_GTEST

#else

#include <iostream>
#include <exception>

#define TZ_CHECK(a, b) \\
        do { \\
            auto aval__ = (a); \\
            auto bval__ = (b); \\
            if (aval__ != bval__) { \\
                std::cerr << "Error at " << __LINE__ << ": " << aval__ << " != " << bval__ << std::endl; \\
                std::cerr << "        " << #a << " != " << #b << std::endl; \\
                throw std::runtime_error("Test failed."); \\
            } \\
        } while (0)

#define TZ_BEGIN_TEST void check_tz()

void check_tz();
int main() {
    try {
        check_tz();
        std::cout << "[OK]" << std::endl;
    } catch (const std::runtime_error& err) {
        std::cerr << "FAILED: " << err.what() << std::endl;
        return 1;
    }
    return 0;
}

#endif

using namespace tzcpp;
TZ_BEGIN_TEST

"""

if __name__ == '__main__':
    now = time.time()
    print(PREFIX)
    print("{")
    for tz in pytz.all_timezones:
        zone = pytz.timezone(tz)
        print('    if (has_timezone("%s")) {' % tz)
        for i in range(5):
            t = int(now - 5 * YEAR + random.randrange(7 * YEAR))
            print("        TZ_CHECK(from_utc(\"%s\", %d), %d);" % (tz, t, from_utc(zone, t)))
            print("        TZ_CHECK(from_local(\"%s\", %d), %d);" % (tz, from_utc(zone, t), t))
        print("    } else {")
        print('        std::cerr << "NO TIMEZONE: %s" << std::endl;' % tz)
        print("    }")
    print("}")


#!/usr/bin/env python2

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

from optparse import OptionParser
import struct
import json
import os.path

__all__ = [
    "generate_zones",
    "json_zones"
]

ZONE_TAB = "zone.tab"

def read_zone(source_prefix, zone):
    def read_fmt(io, fmt):
        s = struct.Struct(fmt)
        return s.unpack(io.read(s.size))

    def read_tzif_data(timesize):
        # See tzfile(5) (which is also in the tzcode distribution).
        if read_fmt(io, "!cccc") != ("T", "Z", "i", "f"):
            raise StandardError("invalid TZ file (TZif header)")
        version = read_fmt(io, "!c")
        if version != ("2",) and version != ("3",):
            raise StandardError("unexpected file version")
        io.read(15)
        (ttisutccnt, ttisstdcnt, leapcnt, timecnt, typecnt, charcnt) = \
            read_fmt(io, "!llllll")
        times = list(read_fmt(io, "!" + str(timecnt) + timesize))
        ltidx = list(read_fmt(io, "!" + str(timecnt) + "B"))
        types = []
        for i in range(typecnt):
            (utoff, isdst, abbrind) = read_fmt(io, "!l?B")
            types.append({"o": utoff, "d": isdst, "a": abbrind})
        abbrchars = read_fmt(io, "!" + str(charcnt) + "s")[0]
        for i in range(typecnt):
            ty = types[i]
            abbrstart = ty["a"]
            abbrend = abbrchars.find("\0", abbrstart)
            ty["a"] = abbrchars[abbrstart:abbrend]
        leaps = []
        for i in range(leapcnt):
            leaps.append(read_fmt(io, "!" + timesize + "l"))
        isstd = list(read_fmt(io, "!" + str(ttisstdcnt) + "?"))
        isutc = list(read_fmt(io, "!" + str(ttisutccnt) + "?"))

        # Explicitly discard all the transitions prior to 1970, because
        # the time zone database itself isn't meaningful prior to 1970
        # since it does not split zones based on zone differences prior
        # to 1970, as described in http://www.twinsun.com/tz/tz-link.htm
        # .  (In other words, all it guarantees prior to 1970 is that
        # the time is correct for the reference city; it is often
        # incorrect for other places in the zone.)
        for i in range(timecnt-1):
            if times[i] >= times[i+1]:
                raise StandardError("times not sorted")
        if timecnt == 0 or times[0] >= 0:
            # The first transition is after 1970, so explicitly indicate
            # that we're starting in zone 0:
            timecnt = timecnt + 1
            times = [0] + times # prepend start of 1970
            ltidx = [0] + ltidx # prepend zone 0
        else:
            firstvalididx = 0
            for i in range(timecnt):
                if times[i] > 0:
                    break
                firstvalididx = i
            timecnt = timecnt - firstvalididx
            times = times[firstvalididx:]
            ltidx = ltidx[firstvalididx:]
            times[0] = 0 # make it 1970

        # Now discard any zonedata now unreferenced (due to above trimming).
        # First, compute the set of zones that are used.
        used_zones = set(ltidx)
        # Second, compute the new zone indexes (or None for zones to be
        # dropped).
        newzoneidxs = []
        newzonecount = 0
        for i in range(typecnt):
            newidx = None
            if i in used_zones:
                newidx = newzonecount
                newzonecount = newzonecount + 1
            newzoneidxs.append(newidx)

        if len(types) != typecnt or \
           (len(isstd) != typecnt and len(isstd) != 0) or \
           (len(isutc) != typecnt and len(isutc) != 0):
            raise StandardError("length mismatch")
        # from this point on, ignore isstd and isutc (notably, don't
        # drop entries from them, if present, to match the dropping we
        # do from types).

        # Third, do the dropping.
        new_types = []
        for i in range(typecnt):
            if newzoneidxs[i] is not None:
                new_types.append(types[i])
        types = new_types
        # Fourth, renumber the pointers into these indices.
        ltidx = [newzoneidxs[idx] for idx in ltidx]

        return { "times": times, "ltidx": ltidx, "types": types }

    io = open(os.path.join(source_prefix, zone), "rb")
    # We expect version "2" of the TZif file, which has the data twice,
    # first with 4-byte time_t and then again with 8-byte time_t.  Throw
    # out the first half and use the second.  See tzfile(5) (which is
    # also in the tzcode distribution).
    read_tzif_data("l")
    j = read_tzif_data("q")
    if io.readline() != "\n":
        raise StandardError("expected newline-delimited POSIX string")
    future_posix_tz = io.readline()
    if not future_posix_tz.endswith("\n"):
        raise StandardError("expected newline-delimited POSIX string")
    future_posix_tz = future_posix_tz[0:len(future_posix_tz)-1]
    j["rule"] = future_posix_tz
    # FIXME: check for garbage at end of file?
    io.close()

    return j

def generate_zones(source_prefix):
    tab = open(os.path.join(source_prefix, ZONE_TAB), "r")
    for line in tab:
        line = line.rstrip("\n")
        line = line.partition("#")[0]
        if line == "":
            continue
        fields = line.split("\t")
        zone = fields[2]
        yield zone
    tab.close()
    # Also generate "Etc/UTC" in addition to the geographic zones.
    yield "Etc/UTC"

def json_zones(source_prefix):
    zones = { zone:read_zone(source_prefix, zone)
              for zone in generate_zones(source_prefix) }
    return json.dumps(zones, sort_keys=True)

if __name__ == '__main__':
    op = OptionParser()
    (options, args) = op.parse_args()

    if len(args) == 1:
        print json_zones(args[0])
    else:
        op.error("expected one argument (tzdata directory, e.g., /usr/share/zoneinfo)")

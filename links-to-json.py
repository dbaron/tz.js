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

# This script converts the link (alias) data from the Olson time zone
# database (http://www.twinsun.com/tz/tz-link.htm) into a JSON format
# suitable for inclusion in the tz.js JavaScript library.

from optparse import OptionParser
import json
import re
import os.path

__all__ = [
    "json_zones"
]

files_with_links = [
    "africa",
    "antarctica",
    "asia",
    "australasia",
    "backward",
    # "backzone" # backzone is not used to generate /usr/share/zoneinfo
    "etcetera",
    "europe",
    "northamerica",
    "southamerica"
]

def json_zones(source_dir):
    ws_re = re.compile("[ \t]+")

    links = {}

    for filename in files_with_links:
        io = open(os.path.join(source_dir, filename), "r")
        for line in io:
            if not line.startswith("Link"):
                continue
            line = line.split("#")[0] # remove comments
            line = line.rstrip(" \t\r\n")
            words = ws_re.split(line)
            if words[0] != "Link":
                raise StandardError("malformed link file {0}: Found link-like line {1}".format(filename, line))
            if len(words) != 3:
                raise StandardError("malformed link file {0}: {1} whitespace-delimited words on line {2}".format(filename, len(words), line))
            dest = words[1]
            source = words[2]
            if source in links:
                raise StandardError("malformed link file {0}: duplicate link {1}".format(filename, source))
            links[source] = dest
        io.close()
    return json.dumps(links, sort_keys=True)

if __name__ == '__main__':
    op = OptionParser()
    (options, args) = op.parse_args()

    if len(args) == 1:
        print json_zones(args[0])
    else:
        op.error("expected one argument (directory of tzdata source)")

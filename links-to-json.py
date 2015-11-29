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

__all__ = [
    "json_zones"
]

def json_zones(backward_file):
    tabs_re = re.compile("\t+")

    links = {}
    io = open(backward_file, "r")
    for line in io:
        if not line.startswith("Link\t"):
            continue
        words = tabs_re.split(line)
        if len(words) != 3:
            raise StandardError("malformed backward file: {0} tab-delimited words".format(len(words)))
        dest = words[1]
        source = words[2].rstrip("\r\n")
        if source in links:
            raise StandardError("malformed backward file: duplicate link {0}".format(source))
        links[source] = dest
    io.close()
    return json.dumps(links, sort_keys=True)

if __name__ == '__main__':
    op = OptionParser()
    (options, args) = op.parse_args()

    if len(args) == 1:
        print json_zones(args[0])
    else:
        op.error("expected one argument (backward file from tzdata source)")

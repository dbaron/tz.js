#!/usr/bin/python

# tz.js - Library for working with timezones in JavaScript

# Written in 2013 by L. David Baron <dbaron@dbaron.org>

# To the extent possible under law, the author(s) have dedicated all
# copyright and related and neighboring rights to this software to the
# public domain worldwide.  This software is distributed without any
# warranty.
#
# You should have received a copy of the CC0 Public Domain Dedication
# along with this software.  If not, see
# <http://creativecommons.org/publicdomain/zero/1.0/>.

# Download the latest version of the timezone database.

import os
import os.path
from urllib import urlopen, urlretrieve
import sys
import re

__all__ = [
    "get_latest_tz_release"
]

SOURCE_DIR = os.path.dirname(os.path.abspath(__file__))

def get_latest_tz_release():
    version = ""
    version_re = re.compile("<span id=\"version\">([a-z0-9]*)<\/span>")
    for line in urlopen("https://www.iana.org/time-zones"):
        match = version_re.search(line)
        if match:
            version = match.group(1)
            break

    def get_dist(path):
        dest_file = os.path.join(SOURCE_DIR, path)
        if not os.path.exists(dest_file):
            sys.stderr.write("Downloading " + path + "\n")
            urlretrieve("https://www.iana.org/time-zones/repository/releases/" + path, dest_file)
    get_dist("tzdata" + version + ".tar.gz")
    get_dist("tzcode" + version + ".tar.gz")
    return { "tzcode": version, "tzdata": version }

if __name__ == '__main__':
    current = get_latest_tz_release()
    print "{0} {1}".format(current["tzcode"], current["tzdata"])

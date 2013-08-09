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
from ftplib import FTP
import sys

SOURCE_DIR = os.path.dirname(os.path.abspath(__file__))

current_tzcode = None
current_tzdata = None
LATEST_LINK_STRING = "-latest.tar.gz -> "
RELEASES_STRING = "releases/"
def dir_callback(line):
    index = line.find(LATEST_LINK_STRING)
    if index == -1 or index < 7 or line[index-7] != " ":
        return
    which = line[ index - 6 : index ]
    if which != "tzdata" and which != "tzcode":
        return
    dest = line[ index + len(LATEST_LINK_STRING) : ]
    if not dest.startswith(RELEASES_STRING):
        raise StandardError("unexpected file path: no releases/")
    dest = dest[ len(RELEASES_STRING) : ]
    current_is(which, dest)

FILE_SUFFIX = ".tar.gz"
def current_is(which, dest):
    global current_tzcode, current_tzdata
    if not dest.startswith(which):
        raise StandardError("unexpected filename start")
    if not dest.endswith(FILE_SUFFIX):
        raise StandardError("unexpected filename end")
    version = dest[ len(which) : len(dest)-len(FILE_SUFFIX) ]
    if which == "tzcode":
        if current_tzcode is not None:
            raise StandardError("already have current tzcode")
        current_tzcode = version
    elif which == "tzdata":
        if current_tzdata is not None:
            raise StandardError("already have current tzdata")
        current_tzdata = version
    else:
        raise StandardError("unexpected argument")

def check_download_file(name):
    destfile = os.path.join(SOURCE_DIR, name)
    tmpfile = os.path.join(SOURCE_DIR, name + ".part")
    if os.path.exists(destfile):
        return
    sys.stderr.write("Downloading " + name + "\n")
    io = open(tmpfile, 'wb')
    ftp.retrbinary("RETR " + name, io.write)
    io.close()
    os.rename(tmpfile, destfile)

ftp = FTP("ftp.iana.org")
ftp.login("anonymous", os.path.basename(__file__))
ftp.cwd("tz")
ftp.dir(dir_callback)
if current_tzcode is None or current_tzdata is None:
    raise StandardError("didn't find current versions")
ftp.cwd("releases")
check_download_file("tzcode" + current_tzcode + FILE_SUFFIX)
check_download_file("tzdata" + current_tzdata + FILE_SUFFIX)
ftp.quit()

print "{0} {1}".format(current_tzcode, current_tzdata)

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

# Build the tz database.

from optparse import OptionParser
import os.path
import os
import subprocess

op = OptionParser()
(options, args) = op.parse_args()

if len(args) == 3:
    destdir = os.path.abspath(args[0])
    tzcodetar = os.path.abspath(args[1])
    tzdatatar = os.path.abspath(args[2])
else:
    op.error("expected three arguments (dest directory, tzcode archive, tzdata archive)")

if not os.path.isdir(destdir):
    raise StandardError("destination not a directory")
sourcedir = os.path.join(destdir, "source")
outputdir = os.path.join(destdir, "output")
if os.path.exists(sourcedir) or os.path.exists(outputdir):
    raise StandardError("destination already exists")

os.mkdir(sourcedir)
os.mkdir(outputdir)

os.chdir(sourcedir)

subprocess.check_call(["tar", "xzf", tzcodetar])
subprocess.check_call(["tar", "xzf", tzdatatar])
subprocess.check_call(["make", "INSTALL", "TOPDIR=" + outputdir])

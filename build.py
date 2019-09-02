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

import os
import os.path
import subprocess
import gzip
import imp
import re
import shutil
import tempfile
import json

INPUT_DIR = os.path.dirname(os.path.abspath(__file__))
OUTPUT_DIR = os.path.join(INPUT_DIR, "output")

if not os.path.exists(OUTPUT_DIR):
    os.mkdir(OUTPUT_DIR)

version_proc = subprocess.Popen(["git", "log", "--format=oneline", "HEAD"],
                                 cwd=INPUT_DIR,
                                 stdout=subprocess.PIPE)
version = version_proc.stdout.read(40)
version_proc.stdout.close()

version_proc = subprocess.Popen(["git", "describe", "--tags", "--exact-match"],
                                 cwd=INPUT_DIR,
                                 stdout=subprocess.PIPE,
                                 stderr=subprocess.PIPE)
(describe_stdout, describe_stderr) = version_proc.communicate()
if version_proc.returncode == 0:
    # Use the tag as primary description and the hash in parentheses.
    version = "{0} ({1})".format(describe_stdout.rstrip("\n"), version)

# If this looks like a github repository, compute the HTTP URL from the
# git URL and include that as part of the version.
version_proc = subprocess.Popen(["git", "remote", "show", "-n", "origin"],
                                 cwd=INPUT_DIR,
                                 stdout=subprocess.PIPE,
                                 stderr=subprocess.PIPE)
(describe_stdout, describe_stderr) = version_proc.communicate()
if version_proc.returncode == 0:
    fetch_re = re.compile("^  Fetch URL: git@github.com:(.*)\.git$",
                          re.MULTILINE)
    m = fetch_re.search(describe_stdout)
    if m is not None:
        url = "https://github.com/" + m.groups()[0]
        version = "{0} {1}".format(url, version)

get_tz_module = imp.load_source("get_tz",
                                os.path.join(INPUT_DIR,
                                             "get-latest-tz-release.py"))
tzversions = get_tz_module.get_latest_tz_release()

tztempdir = tempfile.mkdtemp()

build_tz_module = imp.load_source("build_tz",
                                  os.path.join(INPUT_DIR,
                                               "build-tz.py"))
build_tz_module.build_tz(tztempdir,
                         "tzcode" + tzversions["tzcode"] + ".tar.gz",
                         "tzdata" + tzversions["tzdata"] + ".tar.gz")

zoneinfo_dir = os.path.join(tztempdir, "output", "usr", "share", "zoneinfo")
zdump_command = os.path.join(tztempdir, "output", "usr", "bin", "zdump")

tz_json_module = imp.load_source("compiled_to_json",
                                 os.path.join(INPUT_DIR,
                                              "compiled-to-json.py"))
tz_json = tz_json_module.json_zones(zoneinfo_dir)

source_dir = os.path.join(tztempdir, "source")
link_json_module = imp.load_source("links_to_json",
                                   os.path.join(INPUT_DIR,
                                                "links-to-json.py"))
link_json = link_json_module.json_zones(source_dir)

tz_js_in = open(os.path.join(INPUT_DIR, "tz.js.in"), "rb")
tz_js_source = tz_js_in.read()
tz_js_in.close()

# Most Links are included in zone.tab (though some are not).  So let's
# delete them from the JSON.  (It saves about 10% uncompressed size of
# tz.js, although only 5% compressed.)
tzs = json.loads(tz_json)
for zone in json.loads(link_json):
    if zone in tzs:
        del tzs[zone]
tz_json = json.dumps(tzs, sort_keys=True)

tz_data = open(os.path.join(OUTPUT_DIR, "data.json"), "wb")
json.dump({
    "version" : version,
    "tzversion" : tzversions["tzdata"],
    "links" : json.loads(link_json),
    "zones" : tzs
}, tz_data)
tz_data.close()

build_cpp_module = imp.load_source("build_cpp",
                                  os.path.join(INPUT_DIR,
                                               "create-cpp-data.py"))
cpp_source = build_cpp_module.build_cpp(version, tzversions["tzdata"], tzs, json.loads(link_json))
with open(os.path.join(OUTPUT_DIR, "tzcpp.cpp"), "wb") as cpp_out:
    cpp_out.write(cpp_source)
shutil.copy(os.path.join(INPUT_DIR, "tzcpp.h"), os.path.join(OUTPUT_DIR, "tzcpp.h"))

tz_js_source = tz_js_source.replace("@@VERSION@@", version)
tz_js_source = tz_js_source.replace("@@TZDATA_VERSION@@", tzversions["tzdata"])
tz_js_source = tz_js_source.replace("@@LINKS@@", link_json)
tz_js_source = tz_js_source.replace("@@ZONES@@", tz_json)

tz_js_gz = gzip.open(os.path.join(OUTPUT_DIR, "tz.js.gz"), "wb")
tz_js_gz.write(tz_js_source)
tz_js_gz.close()

tz_js = open(os.path.join(OUTPUT_DIR, "tz.js"), "wb")
tz_js.write(tz_js_source)
tz_js.close()

test_input_file = os.path.join(INPUT_DIR, "build-tests.py")
test_output_file = os.path.join(OUTPUT_DIR, "test-tz.js")
if (not os.path.exists(test_output_file)) or \
   os.stat(test_input_file).st_mtime > os.stat(test_output_file).st_mtime:
    tz_tests_module = imp.load_source("tz_test_generator", test_input_file)
    tests_io = open(test_output_file, "wb")
    tz_tests_module.output_tests(zoneinfo_dir, zdump_command, tests_io)
    tests_io.close()

shutil.copy(os.path.join(INPUT_DIR, "test-tz-browser.html"), OUTPUT_DIR)
shutil.copy(os.path.join(INPUT_DIR, "test-tz-node.js"), OUTPUT_DIR)

cpp_test_input_file = os.path.join(INPUT_DIR, "build-cpp-tests.py")
cpp_test_output_file = os.path.join(OUTPUT_DIR, "tzcpp_test.cpp")
if (not os.path.exists(cpp_test_output_file)) or \
   os.stat(cpp_test_input_file).st_mtime > os.stat(cpp_test_output_file).st_mtime:
    cpp_tz_tests_module = imp.load_source("cpp_tz_test_generator", cpp_test_input_file)
    cpp_tests_io = open(cpp_test_output_file, "wb")
    cpp_tz_tests_module.output_tests(zoneinfo_dir, zdump_command, cpp_tests_io)
    cpp_tests_io.close()

shutil.rmtree(tztempdir)

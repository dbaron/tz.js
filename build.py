#!/usr/bin/python

import os
import os.path
import subprocess
import gzip
import imp

INPUT_DIR = os.path.dirname(__file__)
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

version_proc = subprocess.Popen(["dpkg-query", "--show",
                                  "--showformat=${Version}\n", "tzdata"],
                                  stdout=subprocess.PIPE)
tzdata_version = version_proc.stdout.read()
version_proc.stdout.close()
tzdata_version = tzdata_version.partition("-")[0]

tz_json_module = imp.load_source("compiled_to_json",
                                 os.path.join(INPUT_DIR,
                                              "compiled-to-json.py"))
tz_json = tz_json_module.json_zones()

tz_js_in = open(os.path.join(INPUT_DIR, "tz.js.in"), "rb")
tz_js_source = tz_js_in.read()
tz_js_in.close()

tz_js_source = tz_js_source.replace("@@VERSION@@", version)
tz_js_source = tz_js_source.replace("@@TZDATA_VERSION@@", tzdata_version)
tz_js_source = tz_js_source.replace("@@ZONES@@", tz_json)

tz_js_gz = gzip.open(os.path.join(OUTPUT_DIR, "tz.js.gz"), "wb")
tz_js_gz.write(tz_js_source)
tz_js_gz.close()

tz_js = open(os.path.join(OUTPUT_DIR, "tz.js"), "wb")
tz_js.write(tz_js_source)
tz_js.close()

test_input_file = os.path.join(INPUT_DIR, "build-tests.py")
test_output_file = os.path.join(OUTPUT_DIR, "test-tz.html")
if (not os.path.exists(test_output_file)) or \
   os.stat(test_input_file).st_mtime > os.stat(test_output_file).st_mtime:
    tz_tests_module = imp.load_source("tz_test_generator", test_input_file)
    tests_io = open(test_output_file, "wb")
    tz_tests_module.output_tests(tests_io)
    tests_io.close()

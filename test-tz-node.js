global.tz = require("./tz");
global.print = function(s) {
    console.log(s);
}
var results = require("./test-tz");
var success = results.pass_count > 0 && results.fail_count == 0;
process.exit(!success);

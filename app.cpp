#include "httplib.h"
#include "utils.h"
#include <iostream>
#include <string>

const auto html = load_file("index.html");
const auto style = load_file("styles.css");
const auto js = load_file("script.js");

int main()
{
    using namespace httplib;

    Server svr;

    svr.Get("/", [&](const Request& req, Response& res) {
        res.set_content(html, "text/html");
    });

    svr.Get("/styles.css", [&](const Request& req, Response& res) {
        res.set_content(style, "text/css");
    });

    svr.Get("/script.js", [&](const Request& req, Response& res) {
        res.set_content(js, "application/javascript");
    });

    svr.Get("/hi", [](const Request& req, Response& res) {
        res.set_content("Hello World!", "text/plain");
    });

    svr.Get("/stop", [&](const Request& req, Response& res) {
        svr.stop();
    });

    svr.listen("localhost", 8080);

    return 0;
}
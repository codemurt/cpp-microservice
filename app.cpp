#include "httplib.h"
#include <iostream>

const auto html = R"(
                    <!DOCTYPE html>
                    <html lang="en">
                        <head>
                            <meta charset="UTF-8">
                            <title>Test</title>
                            <link rel="stylesheet" href="styles.css">
                        </head>

                        <body>
                            <h1>My First Heading</h1>
                            <p>My first paragraph</p>
                        </body>
                    </html>
)";

const auto style = R"(
                    body {
                        background-color: powderblue;
                    }
                    h1 {
                        color: blue;
                    }
                    p {
                        color: red;
                    }
)";

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

    svr.Get("/hi", [](const Request& req, Response& res) {
        res.set_content("Hello World!", "text/plain");
    });

    svr.Get("/stop", [&](const Request& req, Response& res) {
        svr.stop();
    });

    svr.listen("localhost", 8080);

    return 0;
}
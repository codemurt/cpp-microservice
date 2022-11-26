#include "httplib.h"
#include <iostream>

int main()
{
    using namespace httplib;
    Client cli("http://localhost:8080");

    auto res = cli.Get("/hi");
    std::cout << res->status << " " << res->body << std::endl;

    return 0;
}
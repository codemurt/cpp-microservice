#include <fstream>
#include <string>
#include <streambuf>
#include "utils.h"

std::string load_file(std::string file_name){
    std::ifstream fin(file_name);
    std::string str((std::istreambuf_iterator<char>(fin)),
                 std::istreambuf_iterator<char>());
    fin.close();
    return str;
}

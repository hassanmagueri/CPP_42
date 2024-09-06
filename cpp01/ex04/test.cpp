#include <iostream>
#include <string>

std::string strReplace(std::string &str, std::string search, std::string replace)
{
    size_t index;

    if ((index = str.find(search)) != std::string::npos)
    {
        str = str.substr(0, index) + replace + str.substr(index + search.size());
        return strReplace(str, search, replace);
    }
    return str;
}

int main()
{
    std::string arg = "aloohh alo hassane alo kawtaraloalo";
    std::string str = strReplace(arg, "alo", "salam");

    // std::cout << str << std::endl;
    std::cout << arg << std::endl;
}
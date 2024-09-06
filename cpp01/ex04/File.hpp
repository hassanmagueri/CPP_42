#include <string>
#include <iostream>
#include <fstream>
#include <stdexcept>

class File
{
    private:
        std::string name;

        std::string strReplace(std::string str, std::string search, std::string replace);
    public:
        File(std::string name) {this->name = name;}


        // \n at the end
        std::string readFileAndReplace(std::string search, std::string replace);
};
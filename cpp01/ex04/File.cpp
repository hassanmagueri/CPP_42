#include "File.hpp"

std::string File::strReplace(std::string str, std::string search, std::string replace)
{
    size_t index;

    if ((index = str.find(search)) != std::string::npos)
    {
        // str = str.substr(0, index) + replace + str.substr(index + search.size());
        return (str.substr(0, index) + replace +
                    strReplace(str.substr(index + search.size()), 
                        search, replace));
    }
    return str;
}

std::string File::readFileAndReplace(std::string search, std::string replace)
{
    std::ifstream   infile(this->name);
    std::ofstream   outfile(this->name + ".replace");
    std::string     line;
    std::string     buffer;

    if (!infile || !outfile)
        throw std::runtime_error("Error: Could not open file " + this->name);
    while (std::getline(infile, line))
        buffer += strReplace(line, search, replace) + "\n";
    buffer.pop_back();
    outfile << buffer;
    outfile.close();
    infile.close();
    return buffer;
}
#include "File.hpp"

int main(int ac, char *av[])
{
    if (ac != 4)
    {
        std::cerr << "enter a valid\n";
        return 1;
    }
    std::string fileName = av[1];
    std::string search = av[2];
    std::string replace = av[3];
    if (search == "")
    {
        std::cerr << "invalid arg\n";
        return 1;
    }
    File file(fileName);
    try
    {
        file.readFileAndReplace(search, replace);
    }catch (const std::runtime_error& e)
    {
        std::cerr <<  "Caught an exception: " << e.what() << std::endl;
    }
    return 0;
}

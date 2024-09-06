#include "File.hpp"

int main(int ac, char *av[])
{
    if (ac != 4)
    {
        std::cerr << "enter a valid\n";
        return 1;
    }
    File file(av[1]);
    try
    {
        file.readFileAndReplace(av[2], av[3]);
    }catch (const std::runtime_error& e)
    {
        std::cerr <<  "Caught an exception: " << e.what() << std::endl;
    }
    return 0;
}

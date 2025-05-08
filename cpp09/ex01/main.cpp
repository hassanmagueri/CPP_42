#include "RPN.hpp"

// int main()
int main(int argc, char const *argv[])
{
    if (argc != 2)
    {
        std::cerr << "empty input\n";
        return 1;
    }
    try
    {
        RPN rp(argv[1]);
        int res = rp.getResult();
        std::cout << "res: " << res << std::endl;
    }
    catch (std::exception &e)
    {
        std::cerr << e.what() << std::endl;
    }
    return 0;
}


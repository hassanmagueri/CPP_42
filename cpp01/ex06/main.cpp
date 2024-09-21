#include "Harl.hpp"

int main(int ac, char *av[])
{
    Harl h;

    (void)ac;
    if (ac != 2)
        return 1;
    std::string level = av[1];
    h.complain(level);
    return 0;
}

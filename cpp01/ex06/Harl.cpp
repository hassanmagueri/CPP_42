#include "Harl.hpp"

void Harl::debug(void)
{
    std::cout << "debug\n";
}

void Harl::info(void)
{
    std::cout << "info\n";
}

void Harl::warning(void)
{
    std::cout << "warning\n";
}

void Harl::error(void)
{
    std::cout << "error\n";
}

void Harl::complain(std::string str)
{
    if (str != "debug" && str != "info" &&
            str != "warning" && str != "error")
        return ;
    switch (str[0])
    {
    case 'd':
        debug();
        break;
    case 'i':
        info();
        break;
    case 'w':
        warning();
        break;
    case 'e':
        error();
        break;
    default:
        break;
    }
}
#include <iostream>
#include <limits>
#include <cmath>
#include "ScalarConverter.hpp"

int main(int ac, char *av[])
{
    // int n = 1;
    // std::cout << f << std::endl;
    if (ac == 1)
        return 1;
    ScalarConverter::convert(av[1]);
}
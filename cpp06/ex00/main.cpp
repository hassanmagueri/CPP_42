#include <iostream>
#include <limits>
#include <cmath>
#include "ScalarConverter.hpp"

int main(int ac, char *av[])
{
    if (ac == 1)
        return 1;
    ScalarConverter::convert(av[1]);

}

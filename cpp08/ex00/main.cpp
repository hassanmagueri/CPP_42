#include "easyfind.hpp"
#include <iostream>

int main()
{
    std::vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);

    if (easyfind(v, 4) == v.end())
        std::cout << "is out\n";
    else
        std::cout << "is in\n";

    return 0;
}

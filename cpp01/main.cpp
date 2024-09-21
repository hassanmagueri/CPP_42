#include <iostream>

int main()
{
    int var1 = 1;
    int var2 = 2;
    int &ref = var1;
    ref = var2;
    std::cout << ref;
}
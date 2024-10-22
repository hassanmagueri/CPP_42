#include <iostream>

class Base
{
public:
    int a;
    Base()
    {
        a = 10;
        std::cout << "Base class\n";
    }
    int getA() {return -1;}
    
};

class Derived : public Base
{
public:
    Derived()
    {
        std::cout << "Derived Class\n";
    }

    int getA() { return a;}
    
};

int main()
{
    Derived d;
    std::cout << d.getA() << "\n";
    Base &b = d;
    std::cout << b.getA() << "\n";
}
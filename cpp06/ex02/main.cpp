#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base *generate()
{
    Base *der = NULL;
    srand(time(0));
    int n = rand() % 3;
    if (n == 0)
        der = new A();
    else if (n == 1)
        der = new B();
    if (n == 2)
        der = new C();
    return der;
}

void identify(Base* p)
{
    std::cout << p->getType() << std::endl;
}

void identify(Base& p)
{
    std::cout << p.getType() << std::endl;
}

int main()
{
    Base *d = generate();
    identify(d);
    // Base &refd = *d;
    identify(*d);
    return 0;
}

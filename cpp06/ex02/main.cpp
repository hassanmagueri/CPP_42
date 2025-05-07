#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base *generate()
{
    Base *der = NULL;
    srand(time(0));
    int n = rand() % 1;
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
    if (dynamic_cast<A*>(p))
        std::cout << "POINTER IDENTIFY CLASS: this is A instance\n";
    else if (dynamic_cast<B*>(p))
        std::cout << "POINTER IDENTIFY CLASS: this is B instance\n";
    else if (dynamic_cast<C*>(p))
        std::cout << "POINTER IDENTIFY CLASS: this is C instance\n";
    else
        std::cout << "POINTER IDENTIFY CLASS: NULL\n";
}

void identify(Base& p)
{
    try
    {
        A a = dynamic_cast<A&>(p);
        std::cout << "REFERENCE IDENTIFY CLASS: this is A instance\n";
        a.~A();
        return ;
    }
    catch(const std::exception& e) {    }
    try
    {
        B b = dynamic_cast<B&>(p);
        std::cout << "REFERENCE IDENTIFY CLASS: this is B instance\n";
        b.~B();
        return ;
    }
    catch(const std::exception& e) {    }
    try
    {
        C c = dynamic_cast<C&>(p);
        std::cout << "REFERENCE IDENTIFY CLASS: this is C instance\n";
        c.~C();
    }
    catch(const std::exception& e) {    }
    
}

void f(){system("leaks main");}

int main()
{
    Base *d = generate();
    identify(*d);
    identify(d);
    delete d;
    return 0;
}

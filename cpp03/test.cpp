#include <iostream>

class Test
{

public:
    int p;
    Test & operator=(const Test &other)
    {
        this->p = other.p;
        return (*this);
    }
};

void f()
{
    system("leaks test");
};

int main()
{
    atexit(f);

    Test t0;
    Test t1;
    Test t2;

    t0.p = 11;
    t1.p = 12;
    t2.p = 13;

    t0 = t1;

    // *(t1.p) = 12;
    // t = t1;
    std::cout << t0.p << std::endl;
    std::cout << t1.p << std::endl;
    std::cout << t2.p << std::endl;
};
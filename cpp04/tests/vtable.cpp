#include <iostream>
using namespace std;

class B
{
public:
    int i;
    string *__vptr;
    virtual void bar()
    {
        *__vptr = "ppp";
        std::cout << "This is B's implementation of bar" << std::endl;
    }
    void qux()
    {
        std::cout << "This is B's implementation of qux" << std::endl;
    }
};

class C : public B
{
public:
    void bar() 
    {
    std::cout << "This is C's implementation of bar" << std::endl;
    }
};


int main()
{
    B* b = new C();
    // int att = b[0];
    // cout << sizeof(*b) << endl;
    // cout << att << endl;
    // cout << &b->i << endl;
    b->bar();
}
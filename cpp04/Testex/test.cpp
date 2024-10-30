#include <iostream>

class B
{
public:
    int a;
    B()
    {
        a = 1;
        std::cout << "\033[90mB class: \033[0m" << &a << std::endl;
    }
    void f()
    {
        std::cout << "\033[90mHello Base\n";
    }
    // void d()
    // {
    //     std::cout << "\033[90mHello\n";
    // }
};

class D : public B
{
public:
    int a;
    D()
    {
        a = 9999999;
        std::cout << "\033[90mA class: \033[0m" << &a << std::endl;
    }
    void f()
    {
        std::cout << "\033[90mhello Dervid\n";
    }
};

int main(int argc, char const *argv[])
{
    D d = D();
    B &obj = d;
    std::cout << &obj.a << std::endl;
    obj.f();

    // std::cout << &(obj) << std::endl;
    // std::cout << &(obj.D::a) << std::endl;
    // std::cout << &(obj.B::a) << std::endl;

    // std::cout << &obj.D::a << std::endl;
    // std::cout << obj.D::a << std::endl;

    // std::cout << sizeof(obj) << std::endl;
    // std::cout << sizeof(D) << std::endl;
    return 0;
}

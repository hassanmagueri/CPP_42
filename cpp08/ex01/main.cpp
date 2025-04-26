#include "Span.hpp"
#include <iostream>

int main()
{
    try
    {
    unsigned int n = 3;
    Span s(n);
    // std::cout << s.shortestSpan() << std::endl;
    // std::cout << s.longestSpan() << std::endl;
    s.addNumber(10);
    s.addNumber(9);
    s.addNumber(1);

    Span sc = s;
    std::cout << sc.shortestSpan() << std::endl;
    std::cout << sc.longestSpan() << std::endl;


    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    return 0;
}

#include "Span.hpp"

Span::Span()
{
}

Span::~Span()
{
}

Span::Span(Span &other)
{
    this->N = other.N;
    this->sp = other.sp;
}

Span &Span::operator=(Span &other)
{
    this->N = other.N;
    this->sp = other.sp;
    return *this;
}

Span::Span(unsigned int n)
{
    N = n;
}

void Span::addNumber(int num)
{
    if(sp.size() >= N)
        throw std::runtime_error("reach the limits");
    sp.push_back(num);
}

int Span::shortestSpan()
{
    if (sp.size() < 2)
        throw std::runtime_error("the items not enough");
    std::sort(sp.begin(), sp.end(), std::greater<int>());
    int shspan = sp[0] - sp[1];
    for (size_t i = 1; i < sp.size() - 1; i++)
        if (sp[i] - sp[i + 1] < shspan)
            shspan = sp[i] - sp[i + 1];
    return shspan;
}

int Span::longestSpan()
{
    if (sp.size() < 2)
        throw std::runtime_error("the items not enough");
    return (*std::max_element(sp.begin(), sp.end()) - *std::min_element(sp.begin(), sp.end()));
}
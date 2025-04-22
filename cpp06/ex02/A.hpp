#include "Base.hpp"

class A: public Base
{
    public:
    A();
    virtual std::string getType() const;
};
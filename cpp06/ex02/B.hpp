#include "Base.hpp"

class B: public Base
{
    public:
    B();
    virtual std::string getType() const;
};
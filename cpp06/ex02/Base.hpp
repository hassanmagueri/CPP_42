#pragma once
#include <cstdlib>
#include <ctime>
#include <iostream>

class Base
{   
public:
    virtual ~Base();
    virtual std::string getType() const = 0;
};


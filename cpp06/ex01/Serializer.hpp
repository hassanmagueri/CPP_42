#pragma once

#include <iostream>
#include <stdint.h>

struct Data
{
    int n;
};

class Serializer
{
    public:
    static uintptr_t serialize(Data* ptr);
    static Data* deserialize(uintptr_t raw);
};

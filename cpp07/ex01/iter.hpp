#pragma once

#include <iostream>
template<typename t> void iter(t* addr, size_t len, void (*f)(t &))
{
    if (addr == NULL || f == NULL)
        return;
    for (size_t i = 0; i < len; i++)
        f(addr[i]);
}
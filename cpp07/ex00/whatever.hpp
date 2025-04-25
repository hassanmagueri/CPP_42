#pragma once

template <typename t1> void swap(t1 &a, t1 &b)
{
    t1 c = a;
    a = b;
    b = c;
}

template <typename t> t min(t a, t b)
{
    return a < b ? a : b;
}

template <typename t> t max(t a, t b)
{
    return a > b ? a : b;
}


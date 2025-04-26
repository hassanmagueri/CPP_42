#include <vector>
#include <list>
#include <map>
#include <algorithm>

template <typename T>

typename T::iterator easyfind(T cont, int n)
{
    return (std::find(cont.begin(),cont.end(), n));
}

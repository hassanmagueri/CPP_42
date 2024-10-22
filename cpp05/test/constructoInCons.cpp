#include <iostream>

class C
{
public:
    std::string _str;
    int _n;
    
    C(std::string &str)
    {
        _str = str;
    }
   
    C(std::string str1, int n)
    {
        C(st);
        _n = n;
    }
};

int main()
{
    C obj("hassane", 12);
    std::cout << obj._str << std::endl;
}

#include "Harl.hpp"

int main(int argc, char const *argv[])
{
    Harl h;

    void (Harl::*ptrFun)(std::string level) = &Harl::complain;
    (h.*ptrFun)("info");
    return 0;
}

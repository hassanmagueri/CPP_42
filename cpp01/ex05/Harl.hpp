#include <iostream>
#include <string>


class Harl
{
private:
    void debug(void);
    void info(void);
    void warning(void);
    void error(void);
    void func(void);
public:
    void complain(std::string &);
};
#include <iostream>
#include <string>

class Harl
{
typedef void (Harl::*ptrMebFun)(void);

typedef struct
{
    std::string level;
    ptrMebFun   ptrMebFun;
} t_fun;

private:
    void debug(void);
    void info(void);
    void warning(void);
    void error(void);
    void func(void);

public:
    void complain(std::string &);
};


#include <iostream>

class Contact
{
	private:
		std::string str;
    public:
        void setStr(std::string str);
        std::string getStr(std::string str) const {return str;}
};
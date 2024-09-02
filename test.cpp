#include <iostream>

using namespace std;

std::string	truncat(std::string arg)
{
	// str.resize(10, '.');
    std::string str = arg;
	std::string spaces = "          ";
	spaces.erase(0, str.size());
    cout << spaces.size() << "\n";
	str.insert(0, spaces);
    if (arg.size() > 10)
    {
        str.resize(9);
        str += '.';
    }
	return str;
}

int main(int argc, char const *argv[])
{
    string str = truncat("abcdef");
    cout << str;
    return 0;
}

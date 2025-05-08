// C++ Program to illustrate the use of
// std::map::lower_bound() method
#include <iostream>
#include <map>

using namespace std;


void removeSpaces(std::string &str, char c)
{
	size_t pos = str.find("|");
	if (pos == std::string::npos || pos == 0)
		return;
	int i = pos - 1;
	while(i >= 0 && str[i] == ' ')
		str.erase(i--, 1);
	pos = str.find("|");
	i = pos + 1;
	std::cout << str[i] << "]]" << std::endl;
	while(i < str.length() && str[i] == ' ')
		str.erase(i, 1);
}

int main() {
	std::string str = "20 0 0-01-033";
	removeSpaces(str, '|');
	std::cout << "str : " << str << std::endl;
	return 0;
}
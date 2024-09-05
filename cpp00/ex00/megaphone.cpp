#include <iostream>

void str_to_upper(std::string str)
{
	for (int i = 0; i < str.size(); i++)
		if (islower(str[i]))
			str[i] = char(toupper(str[i]));
	std::cout << str;
}

int main(int ac, char **av)
{
	if (ac > 1)
		for (int i = 1; i < ac; i++)
			str_to_upper(av[i]);
	else
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	std::cout << "\n";
}
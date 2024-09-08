#include "Harl.hpp"

void Harl::debug(void)
{
    std::cout << "[ DEBUG ]\n";
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special\n";
	std::cout << "ketchup burger. I really do!\n";
}

void Harl::info(void)
{
    std::cout << "[ INFO ]\n";
    std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put\n";
	std::cout << "enough bacon in my burger! If you did, I wouldn’t be asking for more!\n";
}

void Harl::warning(void)
{
    std::cout << "[ WARNING ]\n";
    std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for\n";
	std::cout << "years whereas you started working here since last month.\n";
}

void Harl::error(void)
{
    std::cout << "[ ERROR ]\n";
    std::cout << "This is unacceptable! I want to speak to the manager now.\n";
}

void Harl::func(void)
{
	
}

void Harl::complain(std::string &level)
{
	size_t i = 0; 
	const size_t size = 4;

	t_fun funcs[size] = 
	{
		(t_fun) {"DEBUG", &Harl::debug},
		(t_fun) {"INFO", &Harl::info},
		(t_fun) {"WARNING", &Harl::warning},
		(t_fun) {"ERROR", &Harl::error}
	};
	i = 0;
	switch (level[0])
	{
		case 'D':
			(this->*(funcs[0].ptrMebFun))();
			// i++;
		case 'I':
			(this->*(funcs[1].ptrMebFun))();
			// i++;
		case 'W':
			(this->*(funcs[2].ptrMebFun))();
			// i++;
		case 'E':
			(this->*(funcs[3].ptrMebFun))();
			// i++;
		default:
			break;
	}
	
	// for (;i < size && funcs[i].level != level; i++);
	// for (;i < size; i++)
	// 	(this->*(funcs[i].ptrMebFun))();
}

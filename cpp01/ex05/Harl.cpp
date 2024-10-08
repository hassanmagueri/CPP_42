/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emagueri <emagueri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 11:39:51 by emagueri          #+#    #+#             */
/*   Updated: 2024/09/22 15:29:22 by emagueri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl()
{
}

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

void Harl::complain(std::string level)
{
	int i = 0;

    std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	void (Harl::*ptrFun[])(void) =
	{
		&Harl::debug,
		&Harl::info,
		&Harl::warning,
		&Harl::error,
		&Harl::func
	};
	for (; i < 4 && levels[i] != level; i++);
	(this->*ptrFun[i])();
}

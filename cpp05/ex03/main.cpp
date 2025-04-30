/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emagueri <emagueri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 18:56:12 by emagueri          #+#    #+#             */
/*   Updated: 2025/04/30 17:37:38 by emagueri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
// #include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

void f()
{
	system("leaks main");
}
int main()
{
	atexit(f);
	try
	{
		Intern i;
		AForm *f = i.makeForm("shrubbery creation", "form");
		Bureaucrat br("hassan", 10);
		f->beSigned(br);
		f->execute(br);
	}
	catch(const std::exception& e)
	{
		std::cerr << "Exception: " << e.what() << '\n';
	}
	
	
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emagueri <emagueri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 18:56:12 by emagueri          #+#    #+#             */
/*   Updated: 2024/10/22 19:24:34 by emagueri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
// #include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
	try
	{
		Bureaucrat br("hassan", 1);

		// ShrubberyCreationForm a;
		RobotomyRequestForm a("hassan");
		a.beSigned(br);
		a.execute(br);
		std::cout << a << std::endl;
		
		// AForm *f = ShrubberyCreationForm::clone();
		

		// ShrubberyCreationForm b("abc");
		// std::cout << b << std::endl;
		// b = a;
		// std::cout << b << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << "Exception: " << e.what() << '\n';
	}
	
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emagueri <emagueri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 18:56:12 by emagueri          #+#    #+#             */
/*   Updated: 2025/04/30 17:16:22 by emagueri         ###   ########.fr       */
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
		Bureaucrat br("hassan", 45);

		// ShrubberyCreationForm a;
		RobotomyRequestForm a("hassan");
		// a.beSigned(br);
		// a.beSigned(br);
		// br.signForm(a);
		br.executeForm(a);
		// a.execute(br);
		std::cout << a << std::endl;
		

		// ShrubberyCreationForm b("abc");
		// std::cout << b << std::endl;
		// b = a;
		// std::cout << b << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << "Exception: " << e.what() << '\n';
	}
	// std::cout << "----------------------------------------\n";
	try
	{
		Bureaucrat br("hassan", 70);

		// ShrubberyCreationForm a;
		PresidentialPardonForm a("hassan");
		a.beSigned(br);
		a.execute(br);
		// br.executeForm(a);
		std::cout << a << std::endl;
		

		// ShrubberyCreationForm b("abc");
		// std::cout << b << std::endl;
		// b = a;
		// std::cout << b << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << "Exception: " << e.what() << '\n';
	}
	// try
	// {
	// 	Bureaucrat br("hassan", 5);

	// 	// ShrubberyCreationForm a;
	// 	ShrubberyCreationForm a("hassan");
	// 	a.beSigned(br);
	// 	a.execute(br);
	// 	// br.executeForm(a);
	// 	// std::cout << a << std::endl;
		

	// 	// ShrubberyCreationForm b("abc");
	// 	// std::cout << b << std::endl;
	// 	// b = a;
	// 	// std::cout << b << std::endl;
	// }
	// catch(const std::exception& e)
	// {
	// 	std::cerr << "Exception: " << e.what() << '\n';
	// }
	
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emagueri <emagueri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 18:56:12 by emagueri          #+#    #+#             */
/*   Updated: 2025/04/29 20:56:56 by emagueri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Form.hpp"

int main()
{
	try
	{
		Bureaucrat b1 = Bureaucrat("hassane", 151);
		b1.incrementGrad();
		b1.incrementGrad();
		Form f1 = Form("7ala madanya", -10, 10);
		b1.signForm(f1);
	}
	catch(const std::exception &e)
	{
		std::cerr << e.what() << '\n';
	}


	// try
	// {
	//     Bureaucrat b3 = Bureaucrat("hassane", 0);
	// }
	// catch(const std::exception& e)
	// {
	//     std::cerr << e.what() << '\n';
	// }

	// try
	// {
	//     Bureaucrat b3 = Bureaucrat("hassane", 2);
	// }
	// catch(const std::exception& e)
	// {
	//     std::cerr << e.what() << '\n';
	// }

}

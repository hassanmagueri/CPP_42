/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emagueri <emagueri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 18:56:12 by emagueri          #+#    #+#             */
/*   Updated: 2025/04/29 18:36:18 by emagueri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Bureaucrat.hpp"

int main()
{
    try
    {
        Bureaucrat b3 = Bureaucrat("hassane", 0);
        std::cout << b3 << std::endl;
    }
    // catch(const Bureaucrat::GradeTooLowException& e)
    // {
    //     std::cerr << e.what() << '\n';
    // }
    catch(const std::exception e)
    {
        std::cerr << e.what() << '\n';
    }
    // try
    // {
    //     // Bureaucrat b3 = Bureaucrat("hassane", 0);
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

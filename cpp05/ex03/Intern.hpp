/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emagueri <emagueri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 17:19:36 by emagueri          #+#    #+#             */
/*   Updated: 2025/04/30 13:52:04 by emagueri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
#define INTERN_HPP

#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

class Form;

AForm *newRobotomyRequest(const std::string &target);
AForm *newShrubberyCreation(const std::string &target);
AForm *newShrubberyCreation(const std::string &target);

class Intern
{
    public:
    Intern();
    Intern(const Intern &);
    Intern &operator=(Intern const &);
    ~Intern();
    
    AForm * makeForm(const std::string &name, const std::string &target);
};

#endif

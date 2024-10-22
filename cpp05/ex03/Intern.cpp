/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emagueri <emagueri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 17:19:24 by emagueri          #+#    #+#             */
/*   Updated: 2024/10/22 19:26:59 by emagueri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern() {}

Intern::Intern(Intern const &) {}

Intern &Intern::operator=(Intern const &) { return *this; }

Intern::~Intern() {}

AForm *newShrubberyCreation(const std::string &target)
{
    AForm *form = new ShrubberyCreationForm(target);
    std::cout << "Intern create " << form << std::endl;
    return form;
}

AForm *newPresidentialPardonForm(const std::string &target)
{
    AForm *form = new PresidentialPardonForm(target);
    std::cout << "Intern create " << form << std::endl;
    return form;
}

AForm *newRobotomyRequest(const std::string &target)
{
    AForm *form = new RobotomyRequestForm(target);
    std::cout << "Intern create " << form << std::endl;
    return form;
}

AForm *newNULL(const std::string &target)
{
    std::cerr << "we don't have Form: " << target <<  ".\n";
    return NULL;
}

AForm *Intern::makeForm(const std::string &formName, const std::string &target)
{
    struct Forms
    {
        std::string name;
        AForm *(*newForm)(const std::string &);
    };

    Forms newForms[4] = 
    {
        {
            "shrubbery creation",
            newShrubberyCreation
        },
        {
            "presidential pardon",
            newShrubberyCreation
        },
        {
            "robotomy request",
            newRobotomyRequest
        },
        {
            "NULL",
            newNULL
        }
    };
    int i;
    for (i = 0; i < 3 && formName != newForms[i].name; i++);
    return newForms[i].newForm(target);
}
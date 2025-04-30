/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emagueri <emagueri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 15:58:59 by emagueri          #+#    #+#             */
/*   Updated: 2024/10/21 22:09:25 by emagueri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm()
	:AForm("presidential pardon", signGrade, executeGrade)
{
}

PresidentialPardonForm::PresidentialPardonForm(std::string target)
	:AForm("presidential pardon", signGrade, executeGrade, target)
{
	// this->_target = target;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &other):
	AForm(other)
{
}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &other)
{
	
	AForm::operator=(other);
	return *this;
}

void PresidentialPardonForm::execute(Bureaucrat const &executor) const
{
	executeThrowException(executor, executeGrade);
    
    std::cout << this->getTarget() << ": has been pardoned by Zaphod Beeblebrox.\n";
}

PresidentialPardonForm::~PresidentialPardonForm() { }

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

PresidentialPardonForm::PresidentialPardonForm(std::string _target)
	:AForm("presidential pardon", signGrade, executeGrade)
{
	this->_target = _target;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &other):
	AForm(other)
{
	if (this != &other)
		this->_target = other._target;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &other)
{
	
	AForm::operator=(other);
	this->_target = other._target;
	return *this;
}

void PresidentialPardonForm::execute(Bureaucrat const &executor) const
{
	executeThrowException(executor, signGrade);
    
    std::cout << this->_target << ": has been pardoned by Zaphod Beeblebrox.\n";
}

PresidentialPardonForm::~PresidentialPardonForm() { }

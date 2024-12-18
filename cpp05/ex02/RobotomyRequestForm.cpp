/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emagueri <emagueri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 15:58:59 by emagueri          #+#    #+#             */
/*   Updated: 2024/10/22 17:14:43 by emagueri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm()
	:AForm("robotomy request", signGrade, executeGrade)
{
}

RobotomyRequestForm::RobotomyRequestForm(std::string _target)
	:AForm("robotomy request", signGrade, executeGrade)
{
	this->_target = _target;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &other):
	AForm(other)
{
	if (this != &other)
		this->_target = other._target;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &other)
{
	// const AForm &baseOther = other;
	// AForm &baseThis = *this;
	// baseThis = baseOther;
	
	AForm::operator=(other);
	// is signed should also change either it is in private
	this->_target = other._target;
	return *this;
}

void RobotomyRequestForm::execute(Bureaucrat const &executor) const
{
	executeThrowException(executor, signGrade);
    
    std::srand(time(0));
	
    int r = std::rand();
	if (r % 2 == 0)
        std::cout << this->_target << ": has been robotomized successfully.\n";
	else
        std::cout << this->_target << ": has been robotomy failed.\n";
}

RobotomyRequestForm::~RobotomyRequestForm() { }

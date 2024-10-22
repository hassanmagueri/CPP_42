/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emagueri <emagueri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 18:35:44 by emagueri          #+#    #+#             */
/*   Updated: 2024/10/20 15:44:38 by emagueri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm():
	name("unknown"), gradeToSign(150), gradeToExecute(150)
{   
	isSigned = false;
}

AForm::AForm(const std::string name, const int gradeToSign, const int gradeToExecute):
	name(name), gradeToSign(gradeToSign), gradeToExecute(gradeToExecute) // !!!!! check grade
{   
	isSigned = false;
	gradeIsValid(gradeToSign); //!! sign should be more than execute
	gradeIsValid(gradeToExecute);
}

AForm::AForm(const AForm &other):
	name(other.name), gradeToSign(other.gradeToSign), gradeToExecute(other.gradeToExecute)
{
	isSigned = 0;
}

AForm &AForm::operator=(const AForm &other)
{
	if (this != &other)
	{
		this->isSigned = other.isSigned;
	}
	return *this;
}

AForm::~AForm()
{
	
}

// -------- getters -------- 

const std::string &AForm::getName() const { return name; }

bool AForm::getIsSigned() const{ return isSigned; }

int AForm::getGradeToSign() const { return gradeToSign; }

int AForm::getGradeToExecute() const { return gradeToExecute; }

// ---------- members functions ----------

void AForm::gradeIsValid(int value)
{
	if (value < 1)
        throw AForm::GradeTooHighException();
    else if (value > 150)
        throw AForm::GradeTooLowException();
}

void AForm::beSigned(Bureaucrat const &b)
{
	if (b.getGrade() <= this->gradeToSign)
		isSigned = 1;
	else
		throw AForm::GradeTooLowException();
}

void AForm::executeThrowException(const Bureaucrat executor, int signGrade) const
{
	if (executor.getGrade() > signGrade)
		throw AForm::GradeTooLowException();
	if (!this->getIsSigned())
		throw std::runtime_error("Form not signed yet");
}

// ------- Exception classes 


const char *AForm::GradeTooHighException::what() const _NOEXCEPT
{
    return "grade too high";
}

const char *AForm::GradeTooLowException::what() const _NOEXCEPT
{
    return "grade too low";
}

std::ostream &operator<<(std::ostream &os, AForm const &f)
{
	
	os << "AForm " << f.getName() << ", signed: " << (f.getIsSigned() ? "yes" : "no")
       << ", grade required to sign: " << f.getGradeToSign()
       << ", grade required to execute: " << f.getGradeToExecute();
	return os;
}

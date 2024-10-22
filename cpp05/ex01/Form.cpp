/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emagueri <emagueri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 18:35:44 by emagueri          #+#    #+#             */
/*   Updated: 2024/10/20 15:44:38 by emagueri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form():
	name("unknown"), gradeToSign(150), gradeToExecute(150)
{   
	isSigned = false;
}

Form::Form(const std::string name, const int gradeToSign, const int gradeToExecute):
	name(name), gradeToSign(gradeToSign), gradeToExecute(gradeToExecute) // !!!!! check grade
{   
	isSigned = false;
	gradeIsValid(gradeToSign); //!! sign should be more than execute
	gradeIsValid(gradeToExecute);
}

Form::Form(const Form &other):
	name(other.name), gradeToSign(other.gradeToSign), gradeToExecute(other.gradeToExecute)
{
	isSigned = 0; /// !!!!!! it's maybe something else
	// isSigned = other.isSigned; 
}

Form &Form::operator=(Form &other)
{
	if (this != &other)
	{
		this->isSigned = other.isSigned;
	}
	return *this;
}

Form::~Form()
{
	
}

// -------- getters -------- 

const std::string &Form::getName() const { return name; }

bool Form::getIsSigned() const{ return isSigned; }

int Form::getGradeToSign() const { return gradeToSign; }

int Form::getGradeToExecute() const { return gradeToExecute; }

// ---------- members functions ----------

void Form::gradeIsValid(int value)
{
	if (value < 1)
        throw Form::GradeTooHighException();
    else if (value > 150)
        throw Form::GradeTooLowException();
}

void Form::beSigned(Bureaucrat const &b)
{
	if (b.getGrade() <= this->gradeToSign)
		isSigned = 1;
	else
		throw Form::GradeTooLowException();
}

// ------- Exception classes 


const char *Form::GradeTooHighException::what() const _NOEXCEPT
{
    return "grade too high";
}

const char *Form::GradeTooLowException::what() const _NOEXCEPT
{
    return "grade too low";
}

std::ostream &operator<<(std::ostream &os, Form const &f)
{
	
	os << "Form " << f.getName() << ", signed: " << (f.getIsSigned() ? "yes" : "no")
       << ", grade required to sign: " << f.getGradeToSign()
       << ", grade required to execute: " << f.getGradeToExecute();
	return os;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emagueri <emagueri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 21:25:12 by emagueri          #+#    #+#             */
/*   Updated: 2025/04/30 10:17:57 by emagueri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : name("unkown")
{
    setGrade(150);
}

Bureaucrat::Bureaucrat(const Bureaucrat &other) : name(other.name)
{
    this->grade = other.grade;
}

Bureaucrat::Bureaucrat( std::string name, int grade): name(name)
{
    setGrade(grade);
}

void Bureaucrat::setGrade(int grade)
{
    if (grade < 1)
        throw Bureaucrat::GradeTooHighException();
    else if (grade > 150)
        throw Bureaucrat::GradeTooLowException();
    this->grade = grade;
}

int const &Bureaucrat::getGrade() const { return grade; }

std::string const &Bureaucrat::getName() const { return name; }

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &other)
{
    if (this != &other)
        grade = other.grade;
    return *this;
}

void Bureaucrat::incrementGrad()
{
    setGrade(--grade);
}

void Bureaucrat::decrementGrad()
{
    setGrade(++grade);
}

void Bureaucrat::signForm(AForm &f) const
{
	try
	{
		f.beSigned(*this);
		std::cout << *this << " signed " << f << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << *this << " couldn't sign " << f << " because " << e.what() << std::endl; 
	}
}

void Bureaucrat::executeForm(AForm const & form)
{
    try
    {
        form.execute(*this);
		std::cout << *this << " execute " << form << std::endl;
    }
    catch (std::exception &e)
    {
        std::cerr << *this << " couldn't execute " << form  << std::endl;
    }
}

Bureaucrat::~Bureaucrat()
{
    
}

// ``````````````

const char *Bureaucrat::GradeTooHighException::what() const throw()
{
    return "grade too high";
}

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
    return "grade too low";
}

// ```````````````


std::ostream &operator<<(std::ostream &os, Bureaucrat const &b)
{
	os << "Bureaucrat " << b.getName() << " grade " << b.getGrade();
    return os;
}
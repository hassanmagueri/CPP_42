/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emagueri <emagueri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 18:35:07 by emagueri          #+#    #+#             */
/*   Updated: 2025/04/29 17:39:34 by emagueri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include <exception>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
private:
	const std::string name;
	bool isSigned;
	const int gradeToSign;
	const int gradeToExecute;
	
	// setters
	void gradeIsValid(int value);
public:
	// constracters
	Form();
	Form(std::string const name, const int gradeToSign, const int gradeToExecute);
	Form(const Form &other);
	Form &operator=(Form &other); 
	~Form();

	// getters
	const std::string	&getName() const;
	bool				getIsSigned() const;
	int			getGradeToSign() const;
	int			getGradeToExecute() const;
	
	// member functions
	void beSigned(Bureaucrat const &b);  // Form::GradeTooLowException

	// exceptions
	class GradeTooLowException:public std::exception
	{
	public:
		virtual const char *what() const throw();
	};
	
	class GradeTooHighException: public std::exception
	{
	public:
		virtual const char *what() const throw();
	};
};

std::ostream &operator<<(std::ostream &os, Form const &f);

#endif
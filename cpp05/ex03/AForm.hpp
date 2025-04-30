/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emagueri <emagueri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 18:35:07 by emagueri          #+#    #+#             */
/*   Updated: 2025/04/30 15:37:12 by emagueri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
#define AFORM_HPP

#include <iostream>
#include <exception>
#include "Bureaucrat.hpp"

class Bureaucrat;

class AForm
{
private:
	const std::string name;
	bool isSigned;
	const int gradeToSign;
	const int gradeToExecute;
	std::string _target;
	

protected:
	void gradeIsValid(int value);
	const std::string &getTarget() const;
public:
	// constracters
	AForm();
	AForm(std::string const name, const int gradeToSign, const int gradeToExecute, std::string target);
	AForm(std::string const name, const int gradeToSign, const int gradeToExecute);
	AForm(const AForm &other);
	AForm &operator=(const AForm &other);
	virtual ~AForm();

	// getters
	const std::string	&getName() const;
	bool				getIsSigned() const;
	int					getGradeToSign() const;
	int					getGradeToExecute() const;
	
	// member functions
	void beSigned(Bureaucrat const &b);  // AForm::GradeTooLowException
	void executeThrowException(const Bureaucrat executor, int executeGrade) const;
	virtual void execute(Bureaucrat const &) const = 0;

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

std::ostream &operator<<(std::ostream &os, AForm const &f);

#endif
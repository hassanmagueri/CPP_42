/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emagueri <emagueri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 18:35:07 by emagueri          #+#    #+#             */
/*   Updated: 2024/10/21 19:16:09 by emagueri         ###   ########.fr       */
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
	

protected:
	std::string _target;
	void gradeIsValid(int value);
public:
	// constracters
	AForm();
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
	void executeThrowException(const Bureaucrat executor, int signGrade) const;
	virtual void execute(Bureaucrat const &) const = 0;

	// exceptions
	class GradeTooLowException:public std::exception
	{
	public:
		const char *what() const _NOEXCEPT;
	};
	
	class GradeTooHighException: public std::exception
	{
	public:
		const char *what() const _NOEXCEPT;
	};
};

std::ostream &operator<<(std::ostream &os, AForm const &f);

#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emagueri <emagueri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 18:56:38 by emagueri          #+#    #+#             */
/*   Updated: 2024/10/20 18:22:30 by emagueri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP
#include <iostream>
#include <exception>

class Bureaucrat
{
private:
	const std::string name;
	int grade;
	void setGrade(int grade);
public:
	class GradeTooHighException : public std::exception
	{
		public:
		const char *what() const _NOEXCEPT;
	};

	class GradeTooLowException : public std::exception
	{
		public:
		const char *what() const _NOEXCEPT;
	};
	Bureaucrat();
	Bureaucrat(const Bureaucrat &other);
	Bureaucrat &operator=(const Bureaucrat &other);
	~Bureaucrat();
	
	Bureaucrat(std::string const &name);
	Bureaucrat(std::string const &name, int grade);
	std::string	const &getName() const;
	int			const &getGrade() const;
	void incrementGrad();
	void decrementGrad();
};

std::ostream &operator<<(std::ostream &os, Bureaucrat const &b);

#endif

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emagueri <emagueri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 15:58:59 by emagueri          #+#    #+#             */
/*   Updated: 2024/10/22 17:15:03 by emagueri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm()
	:AForm("shrubbery creation", signGrade, executeGrade)
{
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string _target)
	:AForm("shrubbery creation", signGrade, executeGrade)
{
	this->_target = _target;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &other):
	AForm(other)
{
	if (this != &other)
		this->_target = other._target;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &other)
{
	// const AForm &baseOther = other;
	// AForm &baseThis = *this;
	// baseThis = baseOther;
	
	AForm::operator=(other);
	// is signed should also change either it is in private
	this->_target = other._target;
	return *this;
}

void ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
	executeThrowException(executor, signGrade);
		
	std::ofstream outFile(std::string(_target + "_shrubbery"));

	outFile << "           .        +          .      .          .\n";
    outFile << "     .            _        .                    .\n";
    outFile << "  ,              /;-._,-.____        ,-----.__\n";
    outFile << " ((        .    (_:#::_.:::. `-._   /:, /-._, `._,\n";
    outFile << "  `                 \\   _|`\"=:_::.`.);  \\ __/ /\n";
    outFile << "                      ,    `./  \\:. `.   )==-'  .\n";
    outFile << "    .      ., ,-=-.  ,\\, +#./`   \\:.  / /           .\n";
    outFile << ".           \\/:/`-' , ,\\ '` ` `   ): , /_  -o\n";
    outFile << "       .    /:+- - + +- : :- + + -:'  /(o-) \\)     .\n";
    outFile << "  .      ,=':  \\    ` `/` ' , , ,:' `'--\"--\"---._/`7\n";
    outFile << "   `.   (    \\: \\,-._` ` + '\\, ,\"   _,--._,---\":.__/\n";
    outFile << "              \\:  `  X` _| _,\\/    .-'\n";
    outFile << ".               \":._:`\\____  /:'  /      .           .\n";
    outFile << "                    \\::.  \\/:'  /              +\n";
    outFile << "   .                 `.:.  /:'  }      .\n";
    outFile << "           .           ):_(:;   \\           .\n";
    outFile << "                      /:. _/ ,  |\n";
    outFile << "                   . (|::.     ,`                  .\n";
    outFile << "     .                |::.    {\\\n";
    outFile << "                      |:::\\  \\ `.\n";
    outFile << "                      |:::(\\    |\n";
    outFile << "              O       |:::/{ }  |                  (o\n";
    outFile << "               )  ___/#\\::`/ (O \"==._____   O, (O  /`\n";
}

ShrubberyCreationForm::~ShrubberyCreationForm() { }

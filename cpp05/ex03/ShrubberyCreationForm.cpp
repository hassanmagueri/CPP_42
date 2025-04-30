/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emagueri <emagueri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 15:58:59 by emagueri          #+#    #+#             */
/*   Updated: 2025/04/30 15:27:29 by emagueri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm()
	:AForm("shrubbery creation", signGrade, executeGrade)
{
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target)
	:AForm("shrubbery creation", signGrade, executeGrade, target)
{
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &other):
	AForm(other)
{
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &other)
{
	// const AForm &baseOther = other;
	// AForm &baseThis = *this;
	// baseThis = baseOther;
	
	AForm::operator=(other);
	// is signed should also change either it is in private
	return *this;
}

void ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
	executeThrowException(executor, executeGrade);
		
	std::ofstream outFile(std::string(getTarget() + "_shrubbery"));

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

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emagueri <emagueri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 20:01:44 by emagueri          #+#    #+#             */
/*   Updated: 2024/10/27 22:53:54 by emagueri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./ScalarConverter.hpp"

bool isInt(const std::string &str, int index)
{
	size_t i = 0;
	if (index == 0)
		if (str[0] == '-')
			i = 1;
	for (; i < str.length() ; i++)
		if (!std::isdigit(str.at(i)))
			return false;
	return true;
}

bool isDouble(const std::string &str)
{
	size_t index = str.find(".");
	const std::string integerPart = str.substr(0, index);
	const std::string fractionPart = str.substr(index + 1);
	
	if ((index) == std::string::npos || (integerPart.empty() && fractionPart.empty()))
		return false;

	return (isInt(integerPart, 0) && isInt(fractionPart, 1));
}

bool isFloat(const std::string &str)
{
	return ((str[str.length() - 1] == 'f') && isDouble(str.substr(0, str.length() - 1)));
}

bool isChar(const std::string &str)
{
	if (str.length() == 1 && std::isalpha(str[0]))
		return true;
	return false;
}

void printType(e_type type)
{
	std::cout << "the type is: ";
	if (type == CHAR)
		std::cout << "CHAR";
	else if (type == INT)
		std::cout << "INT";
	else if (type == FLOAT)
		std::cout << "FLOAT";
	else if (type == DOUBLE)
		std::cout << "DOUBLE";
	else
		std::cout << "NONE";
	std::cout << "\n";
}

e_type  getTypeInp(const std::string &str)
{
	if (isChar(str))
		return CHAR;
	if (isInt(str, 0))
		return INT;
	if (isFloat(str))
		return FLOAT;
	if (isDouble(str))
		return DOUBLE;
	return NONE;
}

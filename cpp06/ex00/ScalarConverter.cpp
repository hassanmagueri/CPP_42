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

bool isInt(const std::string &str)
{
	for (int i = 0; i < str.length() ; i++)
		if (!std::isdigit(str.at(i)))
			return false;
	return true;
}

bool isDouble(const std::string &str)
{
	int index = str.find(".");
	const std::string integerPart = str.substr(0, index);
	const std::string fractionPart = str.substr(index + 1);
	
	if ((index) == std::string::npos || (integerPart.empty() && fractionPart.empty()))
		return false;

	return (isInt(integerPart) && isInt(fractionPart));
}

bool isFloat(const std::string &str)
{
	return ((str.back() == 'f') && isDouble(str.substr(0, str.length() - 1)));
}

bool isChar(const std::string &str)
{
	if (str.length() == 1)
		return true;
	return false;
}

void ScalarConverter::convert(const std::string str)
{
	if (isFloat(str))
	{
		std::cout << "true\n";
		return;
	}
	
	std::cout << "false\n";
}
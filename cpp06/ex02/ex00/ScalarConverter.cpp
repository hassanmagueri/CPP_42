/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emagueri <emagueri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 20:01:44 by emagueri          #+#    #+#             */
/*   Updated: 2025/05/02 19:06:23 by emagueri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./ScalarConverter.hpp"

ScalarConverter::ScalarConverter() {}
ScalarConverter::ScalarConverter(ScalarConverter &) {}
ScalarConverter &ScalarConverter::operator=(const ScalarConverter &) {return *this;}
ScalarConverter::~ScalarConverter() {}

void printOutput(e_type type, char c,long i, float f,double d, size_t lenF)
{
	if (type == NONE)
	{
		std::cout 	<< 	"char:\timpossible\n"
					<<	"int:\timpossible\n"
					<<	"float:\tnanf\n"
					<<	"double:\tnan\n";
	}
	else
	{
		if (std::isprint(c))
			std::cout << "char:\t'" << c << "'" << std::endl;
		else
			std::cout << "char:\tNon displayable" << std::endl;
		
		if (i <= std::numeric_limits<int>::max() && i >= std::numeric_limits<int>::min())
		        std::cout 	<<	"int:\t" << i << "\n";
		else
		        std::cout 	<<	"int:\toverflow detected\t" << "\n";
		
		std::cout 	<<	"float:\t";
		if (isinf(f) && f > 0.f)
				std::cout << "+";
		std::cout << std::fixed;
		std::cout << std::setprecision(lenF);
		std::cout << f << "f\n";
		
		std::cout 	<<	"double:\t";
		if (isinf(d) && d > 0.0)
				std::cout << "+";
		std::cout << d << "\n";

		
		// std::cout.unsetf(std::ios::fixed);
	}
}

void ScalarConverter::convert(std::string str)
{
	e_type type = getTypeInp(str);

	long i = 0;
	char c = 0;
	double f = 0;
	double d = 0;
	size_t lenF = 1;

	if (type == FLOAT)
		str.pop_back();
	if (type == FLOAT || type == DOUBLE)
	{
		lenF = str.find(".");
		if (lenF == std::string::npos || lenF == str.length() - 1) lenF = 1;
		else lenF = str.length() - lenF - 1;
	}

	std::stringstream ss(str);

	

	// printType(type);
	// return ;
	// std::cout << "em : " << std::numeric_limits<long>::max() << std::endl;
	if (type == INF)
	{
		std::cout << "char:\tNon displayable" << std::endl;
		std::cout << "int:\toverflow detected\t" << "\n";
		
		std::cout << "float:\t" << str[0] << "inff\t" << "\n";
		std::cout << "double:\t" << str[0] << "inf\t" << "\n";
		return ;
	}
	if (type == CHAR)
	{
		c = str[0];
		i = static_cast<long>(str[0]);
		f = static_cast<float>(str[0]);
		d = static_cast<double>(str[0]);
	}
	else if (type == INT)
	{
		ss >> i;
		
		c = static_cast<long>(i);
		f = static_cast<float>(i);
		d = static_cast<double>(i);
	}
	else if (type == FLOAT)
	{
		ss >> f;
		std::cout << "f : "  << f << std::endl;
		c = static_cast<char>(f);
		i = static_cast<long>(f);
		d = static_cast<double>(f);
	}
	else if (type == DOUBLE)
	{
		ss >> d;
		c = static_cast<char>(d);
		i = static_cast<long>(d);
		f = static_cast<double>(d);
	}

	printOutput(type, c, i, f, d, lenF);

}
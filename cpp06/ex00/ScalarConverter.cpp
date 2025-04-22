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



void printOutput(e_type type, char c,long i, float f,double d)
{
	if (type == NONE)
	{
		std::cout 	<< 	"char: impossible\n"
					<<	"int: impossible\n"
					<<	"float: nanf\n"
					<<	"double: nan\n";
	}
	else
	{
		if (std::isprint(c))
			std::cout << "char: '" << c << "'" << std::endl;
		else
			std::cout << "char: Non displayable" << std::endl;
		if (i <= std::numeric_limits<int>::max() && i >= std::numeric_limits<int>::min())
		        std::cout 	<<	"int: " << i << "\n";
		else
		        std::cout 	<<	"int: overflow detected: " << i << "\n";
		std::cout 	<<	"float: " << f << "f\n"
					<<	"double: " << d << "\n"; 
	}
}

void ScalarConverter::convert(const std::string str)
{
	e_type type = getTypeInp(str);

	long i = 0;
	char c = 0;
	float f = 0;
	double d = 0;
	std::stringstream ss(str);

	printType(type);
	// return ;
	// std::cout << "em : " << std::numeric_limits<long>::max() << std::endl;
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

	printOutput(type, c, i, f, d);

}
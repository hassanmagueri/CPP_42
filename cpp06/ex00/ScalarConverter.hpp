/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emagueri <emagueri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 19:55:30 by emagueri          #+#    #+#             */
/*   Updated: 2024/10/27 22:00:42 by emagueri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP
#include <iostream>
#include <string>
#include <sstream>
#include <limits>

enum e_type
{
    CHAR,
    INT,
    FLOAT,
    DOUBLE,
    NONE
};

class ScalarConverter
{
    public:
    static void convert(std::string str);
    // ScalarConverter();
    // ScalarConverter(ScalarConverter &other);
    // ScalarConverter &operator=(ScalarConverter const &other);
    // ~ScalarConverter();

};
bool isInt(const std::string &str, int index);
bool isDouble(const std::string &str);
bool isFloat(const std::string &str);
bool isChar(const std::string &str);

e_type getTypeInp(const std::string &str);
void printType(e_type type);

#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emagueri <emagueri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 18:29:59 by emagueri          #+#    #+#             */
/*   Updated: 2024/09/30 12:55:28 by emagueri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>
#include <cmath>

const int Fixed::_fracBits = 8;

Fixed::Fixed()
{
	std::cout << "Default constructor called\n";
	_fixedPoint = 0;
}

Fixed::Fixed(const int integer)
{
	std::cout << "Int constructor called\n";
	_fixedPoint = integer << _fracBits;
}

Fixed::Fixed(const float floatPoint)
{
	std::cout << "Float constructor called\n";
	_fixedPoint = std::roundf(floatPoint * (1 << _fracBits));
}

Fixed::Fixed(const Fixed &other)
{
	std::cout << "Copy constructor called\n";
	*this = other;
}

int Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called\n";
	return this->_fixedPoint;
}

void Fixed::setRawBits(int const raw)
{
	this->_fixedPoint = raw;
}

Fixed &Fixed::operator=(const Fixed &other)
{
	std::cout << "Copy assignment operator called\n";
	if (this != &other)
		this->_fixedPoint = other._fixedPoint;
	return *this;
}

std::ostream &operator<<(std::ostream &os, const Fixed &fixed)
{
	os << fixed.toFloat();
	return os;
}

float	Fixed::toFloat(void) const
{
	return (float)(_fixedPoint / (float)(1 << _fracBits));
}

int	Fixed::toInt(void) const
{
	int integer;

	integer = _fixedPoint >> _fracBits;
	return (integer);
}

Fixed::~Fixed()
{
	std::cout << "Destructor called\n";
}

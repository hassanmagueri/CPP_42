/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emagueri <emagueri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 18:31:26 by emagueri          #+#    #+#             */
/*   Updated: 2024/09/28 18:31:26 by emagueri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
	// std::cout << "Default constructor called\n";
	_fixedPoint = 0;
}

Fixed::Fixed(const int integer)
{
	// std::cout << "Int constructor called\n";
	_fixedPoint = integer << 8;
}

Fixed::Fixed(const float floatPoint)
{
	// std::cout << "Float constructor called\n";
	_fixedPoint = roundf(floatPoint * (1 << _fracBits));
	// _fixedPoint = (floatPoint * (1 << _fracBits));
}

Fixed::Fixed(const Fixed &other)
{
	// std::cout << "Copy constructor called\n";
	*this = other;
}

Fixed &Fixed::operator=(const Fixed &other)
{
	// std::cout << "Copy assignment operator called\n";
	this->_fixedPoint = other.getRawBits();
	return *this;
}

bool	Fixed::operator==(const Fixed &fixe)  const
{
	return this->toFloat() == fixe.toFloat();
}

bool	Fixed::operator!=(const Fixed &fixe)  const
{
	return this->toFloat() != fixe.toFloat();
}

bool	Fixed::operator>(const Fixed &fixe)  const
{
	return this->toFloat() > fixe.toFloat();
}

bool	Fixed::operator>=(const Fixed &fixe)  const
{
	return this->toFloat() >= fixe.toFloat();
}

bool	Fixed::operator<(const Fixed &fixe)  const
{
	return this->toFloat() < fixe.toFloat();
}
 
bool	Fixed::operator<=(const Fixed &fixe)  const
{
	return this->toFloat() <= fixe.toFloat();
}

Fixed Fixed::operator+(const Fixed &fixe)
{
	float floatPoint;

	floatPoint = this->toFloat() + fixe.toFloat();
	return (Fixed(floatPoint));
}

Fixed Fixed::operator-(const Fixed &fixe)
{
	float floatPoint;

	floatPoint = this->toFloat() - fixe.toFloat();
	return (Fixed(floatPoint));
}

Fixed Fixed::operator*(const Fixed &fixe)
{
	float floatPoint;

	floatPoint = this->toFloat() * fixe.toFloat();
	return (Fixed(floatPoint));
}

Fixed Fixed::operator/(const Fixed &fixe)
{
	float floatPoint;

	floatPoint = this->toFloat() / fixe.toFloat();
	return (Fixed(floatPoint));
}

Fixed &Fixed::operator++()
{
	_fixedPoint += 1;
	return *this;
}

Fixed Fixed::operator++(int)
{
	Fixed tmp = *this;
	_fixedPoint += 1;
	return tmp;
}

Fixed &Fixed::operator--()
{
	this->_fixedPoint -= 1;
	return *this;
}

Fixed Fixed::operator--(int)
{
	Fixed tmp = *this;
	_fixedPoint -= 1;
	return tmp;
}

std::ostream &operator<<(std::ostream &os, const Fixed &fixed)
{
	os << fixed.toFloat();
	return os;
}

float	Fixed::toFloat(void) const
{
	float floatPoint;

	floatPoint = _fixedPoint / (float)(1 << _fracBits);
	return (float)(_fixedPoint / (float)(1 << _fracBits));
}

int	Fixed::toInt(void) const
{
	int integer;

	integer = _fixedPoint >> _fracBits;
	return (integer);
}

int Fixed::getRawBits(void) const
{
	// std::cout << "getRawBits member function called\n";
	return this->_fixedPoint;
}

void Fixed::setRawBits(int const raw)
{
	this->_fixedPoint = raw;
}

Fixed &Fixed::min(Fixed &f1, Fixed &f2)
{
	if (f1 <= f2)
		return f1;
	return f2;
}

const Fixed &Fixed::min(const Fixed &f1, const Fixed &f2)
{
	if (f1 <= f2)
		return f1;
	return f2;
}

Fixed &Fixed::max(Fixed &f1, Fixed &f2)
{
	if (f1 >= f2)
		return f1;
	return f2;
}

const Fixed &Fixed::max(const Fixed &f1, const Fixed &f2)
{
	if (f1 >= f2)
		return f1;
	return f2;
}

Fixed::~Fixed()
{
	// std::cout << "Destructor called\n";
}

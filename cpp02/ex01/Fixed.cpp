#include "Fixed.hpp"
#include <iostream>
#include <cmath>

Fixed::Fixed()
{
	std::cout << "Default constructor called\n";
	_fixedPoint = 0;
}

Fixed::Fixed(const int integer)
{
	std::cout << "Int constructor called\n";
	_fixedPoint = integer << 8;
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

Fixed &Fixed::operator=(const Fixed &other)
{
	std::cout << "Copy assignment operator called\n";
	this->_fixedPoint = other.getRawBits();
	return *this;
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

Fixed::~Fixed()
{
	std::cout << "Destructor called\n";
}

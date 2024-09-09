#include "Fixed.hpp"
#include <iostream>
#include <cmath>

Fixed::Fixed()
{
	_fixedPoint = 0;
	std::cout << "Default constructor called\n";
}

Fixed::Fixed(const int integer)
{
	_fixedPoint = integer << 8;
	std::cout << "Default constructor called\n";
}

Fixed::Fixed(const float floatPoint)
{
	_fixedPoint = 0;
	_fixedPoint = roundf(floatPoint) << _fracBits;
	_fixedPoint = (floatPoint % 1);
	std::cout << "float constructor called\n";
	// _fixedPoint = integer << 8;
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

int Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called\n";
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

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emagueri <emagueri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 18:29:45 by emagueri          #+#    #+#             */
/*   Updated: 2024/09/28 18:32:31 by emagueri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>


Fixed::Fixed()
{
	_fixedPoint = 0;
	std::cout << "Default constructor called\n";
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

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emagueri <emagueri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 18:30:02 by emagueri          #+#    #+#             */
/*   Updated: 2024/09/28 18:30:02 by emagueri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __FIXED_HPP__
#define __FIXED_HPP__
#include <iostream>

typedef std::ostream ostream;

class Fixed
{
private:
	static const int	_fracBits = 8;
	int					_fixedPoint;
public:
	Fixed();
	Fixed(const int);
	Fixed(const float);
	Fixed(const Fixed &);
	Fixed& operator=(const Fixed &);
	~Fixed();
	float	toFloat(void) const;
	int		toInt(void) const;
	int		getRawBits(void) const;
	void	setRawBits(int);
};

std::ostream &operator<<(std::ostream &os, const Fixed &fixed);

#endif
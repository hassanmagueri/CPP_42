/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emagueri <emagueri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 18:29:47 by emagueri          #+#    #+#             */
/*   Updated: 2024/09/28 18:29:47 by emagueri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __FIXED_HPP__
#define __FIXED_HPP__

class Fixed
{
private:
	static const int	_fracBits = 8;
	int					_fixedPoint;
public:
	Fixed();
	Fixed(const Fixed &);
	Fixed& operator=(const Fixed &);
	Fixed& operator++();
	~Fixed();
	int		getRawBits(void) const;
	void	setRawBits(int);
};

#endif
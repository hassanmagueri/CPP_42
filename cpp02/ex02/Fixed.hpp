#ifndef __FIXED_HPP__
#define __FIXED_HPP__
#include <iostream>
#include <cmath>

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
	friend std::ostream &operator<<(std::ostream &os, const Fixed &fixed);
	~Fixed();
	float	toFloat(void) const;
	int		toInt(void) const;
	int		getRawBits(void) const;
	void	setRawBits(int);
	bool	operator==(const Fixed &) const;
	bool	operator!=(const Fixed &) const;
	bool	operator<(const Fixed &) const;
	bool	operator<=(const Fixed &) const;
	bool	operator>(const Fixed &) const;
	bool	operator>=(const Fixed &) const;
	Fixed	operator+(const Fixed &);
	Fixed	operator-(const Fixed &);
	Fixed	operator*(const Fixed &);
	Fixed	operator/(const Fixed &);
	Fixed	&operator++();
	Fixed	operator++(int);
	Fixed	&operator--();
	Fixed	operator--(int);
	static 			Fixed &min(Fixed &f1, Fixed &f2);
	static const	Fixed &min(const Fixed &f1,const  Fixed &f2);
	static 			Fixed &max(Fixed &f1, Fixed &f2);
	static const	Fixed &max(const Fixed &f1,const  Fixed &f2);

};

#endif
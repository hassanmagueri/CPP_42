#ifndef __FIXED_HPP__
#define __FIXED_HPP__
#include <iostream>

typedef std::ostream ostream;

// #include <ostream>
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
};

#endif
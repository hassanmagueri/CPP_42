#ifndef __FIXED_HPP__
#define __FIXED_HPP__

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
	float	toInt(void) const;
	int		getRawBits(void) const;
	void	setRawBits(int);
};

#endif
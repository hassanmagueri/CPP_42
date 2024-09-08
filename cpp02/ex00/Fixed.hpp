#ifndef __FIXED_HPP__
#define __FIXED_HPP__

class Fixed
{
private:
	static const int	_fracBits;
	int					_fixedPoint;
public:
	Fixed();
	Fixed(const Fixed &);
	Fixed operator=(const Fixed &);
	~Fixed();
	int		getRawBits(void) const;
	void	setRawBits(int const);
};

#endif
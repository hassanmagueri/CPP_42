#include <iostream>
#include "Fixed.hpp"

int main(void)
{
	Fixed *a = new Fixed();
	Fixed *b = ++a;

	// Fixed b(a);
	// Fixed c;
	// c = a;
	b->setRawBits(10);
	std::cout << a->getRawBits() << std::endl;
	std::cout << b->getRawBits() << std::endl;
	// std::cout << c.getRawBits() << std::endl;
	return 0;
}

// Default constructor called
// Copy constructor called
// Copy assignment operator called // <-- This line may be missing depending on your implementation
// getRawBits member function called
// Default constructor called
// Copy assignment operator called
// getRawBits member function called
// getRawBits member function called
// 0
// getRawBits member function called
// 0
// getRawBits member function called
// 0
// Destructor called
// Destructor called
// Destructor called
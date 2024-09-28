/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_oo.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emagueri <emagueri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 18:29:36 by emagueri          #+#    #+#             */
/*   Updated: 2024/09/28 18:29:36 by emagueri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Fixed {
private:
    int _fixedPoint;

public:
    Fixed() : _fixedPoint(0) {}

    Fixed(const Fixed &other) {
        std::cout << "Copy constructor called\n";
        this->_fixedPoint = other.getRawBits();  // Directly copy the value
    }

    // Copy assignment operator
    Fixed operator=(const Fixed &other) {
        std::cout << "Copy assignment operator called\n";

        // Self-assignment check
        if (this != &other) {
            this->_fixedPoint = other.getRawBits();
        }

        return *this; // Return by reference
    }

    // Destructor
    ~Fixed() {}

    // Some accessor function for _fixedPoint
    int getRawBits() const {
        return _fixedPoint;
    }
};

int main() {
    Fixed a;                // Default constructor
    Fixed b(a);             // Copy constructor
    Fixed c;                // Default constructor
    c = b;                  // Copy assignment operator

    std::cout << "a: " << a.getRawBits() << std::endl;
    std::cout << "b: " << b.getRawBits() << std::endl;
    std::cout << "c: " << c.getRawBits() << std::endl;

    return 0;
}

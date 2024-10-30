/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emagueri <emagueri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 22:55:16 by emagueri          #+#    #+#             */
/*   Updated: 2024/10/08 10:25:31 by emagueri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat()
{
    std::cout << "\033[90mWrongCat Created\033[0m" << std::endl;
    type = "WrongCat";
}

WrongCat::WrongCat(const WrongCat &other)
{
    std::cout << "\033[90mWrongCat Created\033[0m" << std::endl;
    *this = other;
}

WrongCat &WrongCat::operator=(const WrongCat &other)
{
    if (this != &other)
        this->type = other.type;
    return *this;
}

void WrongCat::makeSound() const
{
    std::cout << "WrongCat sound!" << std::endl;
}

WrongCat::~WrongCat()
{
    std::cout << "\033[90mWrongCat Destroyed\033[0m" << std::endl;
}

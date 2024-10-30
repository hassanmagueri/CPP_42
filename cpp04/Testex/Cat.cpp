/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emagueri <emagueri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 22:55:16 by emagueri          #+#    #+#             */
/*   Updated: 2024/10/10 11:02:06 by emagueri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
    std::cout << "\033[90mCat Created\033[0m" << std::endl;
    a = 1;
    // type = "Cat";
}

Cat::Cat(const Cat &other)
{
    a = 1;
    *this = other;
}

Cat &Cat::operator=(const Cat &other)
{
    // if (this != &other)
    //     this->type = other.type;
    return *this;
}

void Cat::makeSound() const
{
    std::cout << "Cat sound!" << std::endl;
}

Cat::~Cat()
{
    std::cout << "\033[90mCat Destroyed\033[0m" << std::endl;
}
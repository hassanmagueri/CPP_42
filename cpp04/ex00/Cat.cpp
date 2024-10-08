/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emagueri <emagueri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 22:55:16 by emagueri          #+#    #+#             */
/*   Updated: 2024/10/08 10:25:31 by emagueri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
    std::cout << "Cat Created" << std::endl;
    type = "Cat";
}

Cat::Cat(const Cat &other)
{
    *this = other;
}

Cat &Cat::operator=(const Cat &other)
{
    if (this != &other)
        this->type = other.type;
    return *this;
}

void Cat::makeSound() const
{
    std::cout << "Cat sound! " << std::endl;
}

Cat::~Cat()
{
    std::cout << "Cat Destroyed" << std::endl;
}
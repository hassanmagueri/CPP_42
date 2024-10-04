/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emagueri <emagueri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 22:55:16 by emagueri          #+#    #+#             */
/*   Updated: 2024/10/03 20:47:15 by emagueri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
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

Cat::~Cat() { }
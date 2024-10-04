/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emagueri <emagueri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 22:55:16 by emagueri          #+#    #+#             */
/*   Updated: 2024/10/04 14:05:24 by emagueri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
    std::cout << "Cat created!" << std::endl;
    type = "Cat";
    brain = new Brain();
}

Cat::Cat(const Cat &other)
{
    std::cout << "Dog created!" << std::endl;
    brain = new Brain();
    *this = other;
}

Cat &Cat::operator=(const Cat &other)
{
    if (this != &other)
    {
        this->type = other.type;
        *this->brain = *other.brain;
    }
    return *this;
}

void Cat::makeSound() const
{
    std::cout << "Cat sound! " << std::endl;
}

Cat::~Cat()
{
    delete brain;
    std::cout << "Cat destroyed!" << std::endl;
}

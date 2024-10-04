/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emagueri <emagueri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 22:55:16 by emagueri          #+#    #+#             */
/*   Updated: 2024/10/04 14:05:29 by emagueri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
    std::cout << "Dog created!" << std::endl;
    type = "Dog";
    brain = new Brain();
}

Dog::Dog(const Dog &other)
{
    std::cout << "Dog created!" << std::endl;
    brain = new Brain();
    *this = other;
}

Dog &Dog::operator=(const Dog &other)
{
    if (this != &other)
    {
        this->type = other.type;
        *this->brain = *other.brain;
    }
    return *this;
}

void Dog::makeSound() const
{
    std::cout << "Dog sound! " << std::endl;
}

Dog::~Dog() 
{
    delete brain;
    std::cout << "Dog destroyed!" << std::endl;
}

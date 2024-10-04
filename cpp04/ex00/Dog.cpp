/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emagueri <emagueri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 22:55:16 by emagueri          #+#    #+#             */
/*   Updated: 2024/10/03 20:47:05 by emagueri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
    type = "Dog";
}

Dog::Dog(const Dog &other)
{
    *this = other;
}

Dog &Dog::operator=(const Dog &other)
{
    if (this != &other)
        this->type = other.type;
    return *this;
}

void Dog::makeSound() const
{
    std::cout << "Dog sound! " << std::endl;
}

Dog::~Dog() { }
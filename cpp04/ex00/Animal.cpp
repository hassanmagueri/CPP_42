/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emagueri <emagueri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 22:55:16 by emagueri          #+#    #+#             */
/*   Updated: 2024/10/08 10:22:43 by emagueri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
    std::cout << "Animal Created" << std::endl;
    type = "Animal";
}

Animal::Animal(const Animal &other)
{
    *this = other;
}

const std::string &Animal::getType() const
{
    return type;
}

Animal &Animal::operator=(const Animal &other)
{
    if (this != &other)
        this->type = other.type;
    return *this;
}
void Animal::makeSound() const
{
    std::cout << "Animal sound!" << std::endl;
}

Animal::~Animal()
{
    std::cout << "Animal Destroyed" << std::endl;
}
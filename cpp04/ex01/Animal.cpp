/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emagueri <emagueri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 22:55:16 by emagueri          #+#    #+#             */
/*   Updated: 2024/10/10 11:00:44 by emagueri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
    std::cout << "\033[90mAnimal Created!\033[0m" << std::endl;
    type = "Animal";
}

Animal::Animal(const Animal &other)
{
    std::cout << "\033[90mAnimal Created!\033[0m" << std::endl;
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
    std::cout << "\033[90mAnimal Destroyed\033[0m" << std::endl;
}

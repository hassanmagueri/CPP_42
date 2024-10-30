/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emagueri <emagueri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 22:55:16 by emagueri          #+#    #+#             */
/*   Updated: 2024/10/10 16:46:41 by emagueri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
    std::cout << "\033[90mDog created!\033[0m" << std::endl;
    type = "Dog";
    brain = new Brain();
}

Dog::Dog(const Dog &other)
{
    std::cout << "\033[90mDog created!\033[0m" << std::endl;
    brain = new Brain();
    *this = other;
}

Dog &Dog::operator=(const Dog &other)
{
    std::cout << "Dog assign operator \n";
    if (this != &other)
    {
        this->type = other.type;
        *this->brain = *other.brain;
    }
    return *this;
}

void Dog::makeSound() const
{
    std::cout << "Dog sound!" << std::endl;
}

Dog::~Dog() 
{
    delete brain;
    std::cout << "\033[90mDog destroyed!\033[0m" << std::endl;
}

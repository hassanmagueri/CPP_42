/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emagueri <emagueri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 22:55:16 by emagueri          #+#    #+#             */
/*   Updated: 2024/10/10 11:02:19 by emagueri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
    std::cout << "\033[90mDog Created\033[0m" << std::endl;
    // type = "Dog";
}

Dog::Dog(const Dog &other)
{
    *this = other;
}

Dog &Dog::operator=(const Dog &other)
{
    // if (this != &other)
    //     this->type = other.type;
    return *this;
}

void Dog::makeSound() const
{
    std::cout << "Dog sound!" << std::endl;
}

Dog::~Dog() 
{
    std::cout << "\033[90mDog Destroyed\033[0m" << std::endl;
}
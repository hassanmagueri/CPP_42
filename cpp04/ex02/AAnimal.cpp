/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emagueri <emagueri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 22:55:16 by emagueri          #+#    #+#             */
/*   Updated: 2024/10/08 10:36:03 by emagueri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal()
{
    type = "AAnimal";
    std::cout << "AAnimal Created" << std::endl;
}

AAnimal::AAnimal(const AAnimal &other)
{
    *this = other;
}

const std::string &AAnimal::getType() const
{
    return type;
}

AAnimal &AAnimal::operator=(const AAnimal &other)
{
    if (this != &other)
        this->type = other.type;
    return *this;
}
void AAnimal::makeSound() const
{
    std::cout << "AAnimal sound!" << std::endl;
}

AAnimal::~AAnimal()
{
    std::cout << "AAnimal Destroyed" << std::endl;
}
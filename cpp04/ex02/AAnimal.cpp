/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emagueri <emagueri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 22:55:16 by emagueri          #+#    #+#             */
/*   Updated: 2024/10/04 15:55:49 by emagueri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal()
{
    type = "AAnimal";
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

AAnimal::~AAnimal() { }
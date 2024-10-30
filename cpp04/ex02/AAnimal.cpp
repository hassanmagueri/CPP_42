/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emagueri <emagueri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 22:55:16 by emagueri          #+#    #+#             */
/*   Updated: 2024/10/10 10:59:45 by emagueri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal()
{
    type = "AAnimal";
    std::cout << "\033[90mAAnimal Created\033[0m" << std::endl;
}

AAnimal::AAnimal(const AAnimal &other)
{
    std::cout << "\033[90mAAnimal Created\033[0m" << std::endl;
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
    std::cout << "\033[90mAAnimal sound!" << std::endl;
}

AAnimal::~AAnimal()
{
    std::cout << "\033[90mAAnimal Destroyed\033[0m" << std::endl;
}
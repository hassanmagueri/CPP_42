/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emagueri <emagueri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 11:52:20 by emagueri          #+#    #+#             */
/*   Updated: 2024/10/08 10:38:12 by emagueri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure()
{
    type = "cure";
    std::cout << "Cure Created!" << std::endl;
}

Cure::Cure(const Cure &other)
{
    std::cout << "Cure Created!" << std::endl;
    *this = other;
}

Cure &Cure::operator=(const Cure &other)
{
    if (this != &other)
        this->type = other.type;
    return *this;
}

AMateria *Cure::clone() const
{
    return (new Cure(*this));
}

void Cure::use(ICharacter &target)
{
    std::cout << "* heals " << target.getName() <<  " ’s wounds *" << std::endl;
}

Cure::~Cure()
{
    std::cout << "Cure Destroyed" << std::endl;
}

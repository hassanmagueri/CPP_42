/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emagueri <emagueri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 11:52:20 by emagueri          #+#    #+#             */
/*   Updated: 2024/10/11 09:55:50 by emagueri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure()
{
    type = "cure";
    std::cout << "\033[90mCure Created!\033[0m" << std::endl;
}

Cure::Cure(const Cure &other)
{
    std::cout << "\033[90mCure Created!\033[0m" << std::endl;
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
    std::cout << "* heals \033[0m" << target.getName() <<  " ’s wounds *" << std::endl;
}

Cure::~Cure()
{
    std::cout << "\033[90mCure Destroyed\033[0m" << std::endl;
}

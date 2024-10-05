/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emagueri <emagueri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 11:10:55 by emagueri          #+#    #+#             */
/*   Updated: 2024/10/05 14:58:35 by emagueri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria()
{
    std::cout << "AMateria Created" << std::endl;
    type = "unkown";
}

AMateria::AMateria(const std::string &type)
{
    std::cout << "AMateria Created" << std::endl;
    this->type = type;
}

AMateria::AMateria(const AMateria &other)
{
    std::cout << "AMateria Created" << std::endl;
    *this = other;
}

AMateria &AMateria::operator=(const AMateria &other)
{
    (void) other;
    return *this;
}

std::string const &AMateria::getType() const
{
    return this->type;
}

AMateria::~AMateria()
{
    std::cout << "AMateria Destroyed" << std::endl;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emagueri <emagueri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 11:10:55 by emagueri          #+#    #+#             */
/*   Updated: 2024/10/10 10:58:27 by emagueri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria()
{
    std::cout << "\033[90mAMateria Created\033[0m" << std::endl;
    type = "unkown";
}

AMateria::AMateria(const std::string &type)
{
    std::cout << "\033[90mAMateria Created\033[0m" << std::endl;
    this->type = type;
}

AMateria::AMateria(const AMateria &other)
{
    std::cout << "\033[90mAMateria Created\033[0m" << std::endl;
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
    std::cout << "\033[90mAMateria Destroyed\033[0m" << std::endl;
}

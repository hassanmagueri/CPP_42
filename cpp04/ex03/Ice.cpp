/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emagueri <emagueri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 11:52:20 by emagueri          #+#    #+#             */
/*   Updated: 2024/10/11 09:56:11 by emagueri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice()
{
	type = "ice";
	std::cout << "\033[90mIce Created\033[0m" << std::endl;
}

Ice::Ice(const Ice &other)
{
	std::cout << "\033[90mIce Created\033[0m" << std::endl;
	*this = other;
}

Ice &Ice::operator=(const Ice &other)
{
	if (this != &other)
	{
		this->type = other.type;
	}
	return *this;
}

std::string const &Ice::getType() const
{
	return this->type;
}

AMateria *Ice::clone() const
{
	return (new Ice(*this));
}

void Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}

Ice::~Ice()
{
	std::cout << "\033[90mIce Destroyed\033[0m" << std::endl;
}

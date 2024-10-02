/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emagueri <emagueri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 16:58:18 by emagueri          #+#    #+#             */
/*   Updated: 2024/10/02 18:29:52 by emagueri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap()
{
	_name = "unkown";
	std::cout << "FragTrap " << this->_name << " Default constructor called\n";
	_hitPoint = 100;
	_energyPoint = 100;
	_attackDamage = 30;
}

FragTrap::FragTrap(const std::string name):ClapTrap(name)
{
	std::cout << "FragTrap " << this->_name << " Constructor(name) called\n";
	_hitPoint = 100;
	_energyPoint = 100;
	_attackDamage = 30;
}

FragTrap::FragTrap(FragTrap const &other)
{
	std::cout << "FragTrap " << this->_name << "Default copy constructor called\n";
	*this = other;
}

FragTrap &FragTrap::operator=(FragTrap const &other)
{
	std::cout << "FragTrap " << this->_name << "Assign operator called\n";
	if (this != &other)
	{
		this->_name = other._name;
		this->_hitPoint = other._hitPoint;
		this->_energyPoint = other._energyPoint;
		this->_attackDamage = other._attackDamage;
	}
	return *this;
}

void FragTrap::highFivesGuys(void)
{
	if (_hitPoint > 0 && _energyPoint > 0)
		std::cout << "FragTrap " << _name << " high fives guys!\n";
}

FragTrap::~FragTrap(void)
{
	std::cout << "FragTrap " << this->_name << " Deconstructor called\n";
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emagueri <emagueri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 20:34:45 by emagueri          #+#    #+#             */
/*   Updated: 2024/10/02 18:55:18 by emagueri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap():FragTrap("unkown", 1)
{
	std::cout << "DiamondTrap " << this->_name << " Default constructor called\n";
	_name = "unkown";
	_hitPoint = FragTrap::_hitPoint;   // 100
	_energyPoint = ScavTrap::_energyPoint; // 50
	_attackDamage = FragTrap::_attackDamage; // 30
	
}

DiamondTrap::DiamondTrap(const std::string name):
	ClapTrap(name + "_clap_name") ,
	ScavTrap(name), FragTrap(name, 1),
	_name(name)
{
	std::cout << "DiamondTrap " << this->_name << " Constructor(name) called\n";
	_hitPoint = FragTrap::_hitPoint;
	_energyPoint = ClapTrap::_energyPoint;
	_attackDamage = FragTrap::_attackDamage;
}

DiamondTrap::DiamondTrap(const DiamondTrap &other)
{
	std::cout << "ClapTrap " << this->_name << " Default copy constructor called\n";
	*this = other;
}

DiamondTrap &DiamondTrap::operator=(DiamondTrap const &other)
{
	std::cout << "ClapTrap " << this->_name << " Assign operator called\n";
	if (this != &other)
	{
		_name = other._name;
		_hitPoint = other._hitPoint;
		_energyPoint = other._energyPoint;
		_attackDamage = other._attackDamage;
		ClapTrap::_name = other.ClapTrap::_name;
	}
	return *this;
}

void DiamondTrap::whoAmI()
{
	if (_hitPoint > 0 && _energyPoint > 0)
		std::cout << "I am DiamondTrap " << _name << ", and ClapTrap's name is " << ClapTrap::_name << "\n";
}


DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap " << this->_name << " Deconstructor called\n";
}

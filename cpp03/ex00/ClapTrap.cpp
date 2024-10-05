/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emagueri <emagueri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 12:49:44 by emagueri          #+#    #+#             */
/*   Updated: 2024/10/02 21:56:47 by emagueri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"


ClapTrap::ClapTrap()
{
	std::cout << "ClapTrap " << this->_name << "Default constructor called\n";
	_name = "unknown";
	_hitPoint = 10;
	_energyPoint = 10;
	_attackDamage = 0;
}

ClapTrap::ClapTrap(std::string name)
{
	std::cout << this->_name << " Constructor(name) called\n";
	_hitPoint = 10;
	_energyPoint = 10;
	_attackDamage = 0;
	this->_name = name;
}

ClapTrap::ClapTrap(const ClapTrap &other)
{
	std::cout << this->_name << "Default copy constructor called\n";
	*this = other;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &other)
{
	std::cout << this->_name << "Assign operator called\n";
	this->_name = other._name;
	this->_hitPoint = other._hitPoint;
	this->_energyPoint = other._energyPoint;
	this->_attackDamage = other._attackDamage;
	return *this;
}

// ClapTrap <name> attacks <target>, causing <damage> points of damage!
void ClapTrap::attack(const std::string &target)
{
	if (_hitPoint > 0 && _energyPoint > 0)
	{
		std::cout << "ClapTrap " + _name + " attacks " + target +
			", casing " << _attackDamage << " points of damage!\n";
		this->_energyPoint--;
		return ;
	}
	std::cout << this->_name + " can't attack because it has no energy or hit points!\n";
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_energyPoint > 0 && this->_hitPoint > 0)
	{
		this->_hitPoint += amount;
		this->_energyPoint--;
		std::cout << "ClapTrap " << this->_name << " repairs itself, regaining " 
				  << amount << " hit points! "
				  << "Current hit points: " << this->_hitPoint << "\n";
		return ;
	}
	std::cout << "ClapTrap " << this->_name << " can't repair because it has no energy or hit points!\n";
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (this->_energyPoint > 0 && this->_hitPoint > 0)
	{
		this->_hitPoint -= amount;
		if (this->_hitPoint < 0)
			this->_hitPoint = 0;
		std::cout << "ClapTrap " << this->_name << " takes " << amount << " points of damage! "
				<< "Remaining hit points: " << this->_hitPoint << "\n";
		return ;
	}
	std::cout << "ClapTrap " << this->_name << " is already destroyed and can't take more damage!\n";
}

ClapTrap::~ClapTrap()
{
	std::cout << this->_name << " Deconstructor called\n";
}

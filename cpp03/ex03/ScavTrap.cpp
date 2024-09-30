/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emagueri <emagueri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 16:58:18 by emagueri          #+#    #+#             */
/*   Updated: 2024/09/30 20:13:59 by emagueri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
    std::cout << "ScavTrap " << this->_name << " Default constructor called\n";
    _hitPoint = 100;
    _energyPoint = 50;
    _attackDamage = 20;
}

ScavTrap::ScavTrap(const std::string name):ClapTrap(name)
{
    _className = "ScavTrap";
    std::cout << "ScavTrap " << this->_name << "Constructor(name) called\n";
    _hitPoint = 100;
    _energyPoint = 50;
    _attackDamage = 20;
}

ScavTrap::ScavTrap(ScavTrap const &other)
{
	std::cout << "ScavTrap " << this->_name << "Default copy constructor called\n";
	*this = other;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &other)
{
    if (this != &other)
    {
        this->_name = other._name;
        this->_hitPoint = other._hitPoint;
        this->_energyPoint = other._energyPoint;
        this->_attackDamage = other._attackDamage;
    }
    return *this;
}

void ScavTrap::attack(const std::string &target)
{
    if (_hitPoint > 0 && _energyPoint > 0)
    {
        std::cout << "ScavTrap " + _name + " attacks " + target +
                         ", casing "
                  << _attackDamage << " points of damage!\n";
        _energyPoint--;
        return;
    }
    std::cout << "ScavTrap " << this->_name + " can't attack because it has no energy or hit points!\n";
}

void ScavTrap::guardGate(void)
{
    std::cout << "ScavTrap " << _name << " is now in Gatekeeper mode!\n";
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "ScavTrap " << this->_name << " Deconstructor called\n";
}
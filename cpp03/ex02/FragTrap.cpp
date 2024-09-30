/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emagueri <emagueri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 16:58:18 by emagueri          #+#    #+#             */
/*   Updated: 2024/09/30 00:45:10 by emagueri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(const std::string name):ClapTrap(name)
{
    _className = "FragTrap";
    std::cout << "FragTrap " << this->_name << "Constructor(name) called\n";
    _hitPoint = 100;
    _energyPoint = 100;
    _attackDamage = 30;
}

void FragTrap::highFivesGuys(void)
{
    std::cout << "FragTrap " << _name << " high fives guys!\n";
}

FragTrap::~FragTrap(void)
{
	std::cout << "FragTrap " << this->_name << " Deconstructor called\n";
}
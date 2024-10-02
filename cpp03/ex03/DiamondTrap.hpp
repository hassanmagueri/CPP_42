/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emagueri <emagueri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 15:21:04 by emagueri          #+#    #+#             */
/*   Updated: 2024/10/02 19:17:19 by emagueri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap: public ScavTrap, public FragTrap
{
private:
    std::string _name;
public:
    // void attack(const std::string& target);
    // using ScavTrap::attack;
    DiamondTrap();
    DiamondTrap(const std::string _name);
    DiamondTrap(DiamondTrap const &);
    DiamondTrap &operator=(DiamondTrap const &);
    void whoAmI();
    ~DiamondTrap();
};

#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emagueri <emagueri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 16:58:07 by emagueri          #+#    #+#             */
/*   Updated: 2024/10/05 21:00:32 by emagueri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP

#define SCAVTRAP
#include <iostream>
#include "ClapTrap.hpp"

class ScavTrap : public virtual ClapTrap
{
public:
	ScavTrap();
	ScavTrap(std::string name);
	ScavTrap(ScavTrap const &);
	ScavTrap &operator=(ScavTrap const &);
	
	~ScavTrap(void);
	void attack(const std::string &);
	void guardGate();
};

#endif
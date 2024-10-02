/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emagueri <emagueri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 12:49:39 by emagueri          #+#    #+#             */
/*   Updated: 2024/10/02 19:31:59 by emagueri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main()
{
    DiamondTrap dt = DiamondTrap("robot");
    
    dt.guardGate();
    dt.highFivesGuys();
    dt.whoAmI();
    dt.attack("kolo");
    dt.takeDamage(444);
    dt.beRepaired(100);
    dt.highFivesGuys();
    DiamondTrap any;
    any.whoAmI();
    for (int i = 0; i < 51; i++)
        any.attack("jojo");
}

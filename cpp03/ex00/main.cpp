/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emagueri <emagueri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 12:49:39 by emagueri          #+#    #+#             */
/*   Updated: 2024/09/24 14:30:21 by emagueri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
    ClapTrap ct = ClapTrap("robot");
    ct.attack("kolo");
    ct.takeDamage(100);
    ct.takeDamage(100);
    
    ct.attack("kolo");
}

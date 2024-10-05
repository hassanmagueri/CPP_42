/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emagueri <emagueri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 12:49:39 by emagueri          #+#    #+#             */
/*   Updated: 2024/10/05 20:49:20 by emagueri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
    ClapTrap ct = ClapTrap("robot");
    ct.attack("kolo");
    ct.takeDamage(20);
    ct.takeDamage(5);
}

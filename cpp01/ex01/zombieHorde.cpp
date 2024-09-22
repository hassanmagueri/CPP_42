/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emagueri <emagueri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 11:38:59 by emagueri          #+#    #+#             */
/*   Updated: 2024/09/22 15:20:53 by emagueri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(int n, std::string name)
{
    if (n < 0)
        n = 0;
    Zombie *zombies = new Zombie[n];
    for (int i = 0; i < n; i++)
        zombies[i].setName(name);
    return (zombies);
}

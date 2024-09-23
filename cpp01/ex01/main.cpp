/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emagueri <emagueri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 11:38:20 by emagueri          #+#    #+#             */
/*   Updated: 2024/09/23 13:52:49 by emagueri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <unistd.h>

int main()
{
	int n = 5;
	Zombie *zombie = zombieHorde(n, "zombi");
	for(int i = 0; i < n; i++)
		zombie[i].announce();
	delete [] zombie;
}
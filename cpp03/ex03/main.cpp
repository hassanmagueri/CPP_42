/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emagueri <emagueri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 12:49:39 by emagueri          #+#    #+#             */
/*   Updated: 2024/09/30 20:03:48 by emagueri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main()
{
    ScavTrap st = ScavTrap("robot");
    ScavTrap st2 = ScavTrap("robot2");
    st.guardGate();
    st.attack("kolo");
    
    st.attack("kolo");
}

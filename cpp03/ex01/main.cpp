/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emagueri <emagueri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 12:49:39 by emagueri          #+#    #+#             */
/*   Updated: 2024/10/02 19:13:30 by emagueri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main()
{
    ScavTrap st = ScavTrap("robot");
    st.guardGate();
    st.attack("kolo");
    st.takeDamage(50);
    st.takeDamage(20);
    st.beRepaired(10);
    st.takeDamage(40);
    st.beRepaired(10);
    st.attack("polo");
    st = ScavTrap();
    for(int i = 0; i < 51; i++)
        st.attack("pp");
}

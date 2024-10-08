/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emagueri <emagueri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 21:35:25 by emagueri          #+#    #+#             */
/*   Updated: 2024/10/08 10:37:19 by emagueri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"


Brain::Brain()
{
    std::cout << "Brain created!" << std::endl;
}

Brain::Brain(const Brain &other)
{
    std::cout << "Brain created!" << std::endl;
    *this = other;
}

Brain &Brain::operator=(const Brain &other)
{
    if (this != &other)
        for (int i = 0; i < 100; i++)
            ideas[i] = other.ideas[i];
    return *this;
}

Brain::~Brain() 
{
    std::cout << "Brain destroyed!" << std::endl;
}
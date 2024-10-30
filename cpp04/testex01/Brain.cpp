/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emagueri <emagueri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 21:35:25 by emagueri          #+#    #+#             */
/*   Updated: 2024/10/10 10:58:27 by emagueri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"


Brain::Brain()
{
    std::cout << "\033[90mBrain created!\033[0m" << std::endl;
}

Brain::Brain(const Brain &other)
{
    std::cout << "\033[90mBrain: construction\033[0m" << std::endl;
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
    std::cout << "\033[90mBrain destroyed!\033[0m" << std::endl;
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emagueri <emagueri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 21:33:09 by emagueri          #+#    #+#             */
/*   Updated: 2024/10/04 11:48:35 by emagueri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP
#include <iostream>


class Brain
{
private:
	std::string ideas[100];
public:
	Brain();
	Brain(const Brain &);
	Brain &operator=(const Brain &);
	~Brain();
};

#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emagueri <emagueri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 16:58:07 by emagueri          #+#    #+#             */
/*   Updated: 2024/10/05 22:56:20 by emagueri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP

#define FRAGTRAP_HPP

#include <iostream>
#include "ClapTrap.hpp"

class FragTrap : public virtual ClapTrap
{
protected:
	FragTrap(std::string name, int);
public:
	FragTrap();
	FragTrap(std::string name);
	FragTrap(FragTrap const &);
	FragTrap &operator=(FragTrap const &);
	void highFivesGuys();
	~FragTrap(void);
};

#endif
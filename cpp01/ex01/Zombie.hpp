/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emagueri <emagueri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 11:38:56 by emagueri          #+#    #+#             */
/*   Updated: 2024/09/23 14:14:35 by emagueri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ZOMBIE_HPP__
# define __ZOMBIE_HPP__
# include <iostream>

class Zombie{
	private:
		std::string name;
	public:
					Zombie();
					Zombie(std::string name);
		void		announce(void);
		void		setName(std::string name);
		~Zombie();
};

Zombie* zombieHorde( int n, std::string name );

#endif
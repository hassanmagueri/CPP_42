/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emagueri <emagueri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 11:38:40 by emagueri          #+#    #+#             */
/*   Updated: 2024/09/22 11:38:40 by emagueri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ZOMBIE_HPP__
# define __ZOMBIE_HPP__
# include <iostream>

class Zombie{
	private:
		std::string name;
	public:
		Zombie(std::string name);
		void	announce(void);
		~Zombie();
};
Zombie	*newZombie(std::string name);
void	randomChump(std::string name);
#endif
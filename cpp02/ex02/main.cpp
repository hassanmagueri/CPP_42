/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emagueri <emagueri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 11:45:47 by emagueri          #+#    #+#             */
/*   Updated: 2024/10/28 19:54:30 by emagueri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Fixed.hpp"

int main(void)
{
	float f = 83886;
	
	std::cout << f << std::endl;

	Fixed a = 838877;

	std::cout << a << std::endl;
	a = 8388608;
	std::cout << a << std::endl;
	return 0;
}
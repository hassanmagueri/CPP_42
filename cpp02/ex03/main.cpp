/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emagueri <emagueri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 18:31:35 by emagueri          #+#    #+#             */
/*   Updated: 2024/09/29 19:10:56 by emagueri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Point.hpp"

int main()
{
	Point a(0, 20);
	Point b(0, 0);
	Point c(20,20);

	Point p;
	
	p = Point(0.002f, 1.9f);

	std::cout << p.getX() << std::endl;

	if (bsp(a, b, c, p))
		std::cout << "is in\n";
	else
		std::cout << "is out\n";
	return 0;
}

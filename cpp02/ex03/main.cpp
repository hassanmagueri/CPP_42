/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emagueri <emagueri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 18:31:35 by emagueri          #+#    #+#             */
/*   Updated: 2024/10/30 22:56:24 by emagueri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Point.hpp"

void output(Point &a, Point &b, Point &c, Point p)
{
	std::cout << "The point " << p << " :\n\t";
	if (bsp(a, b, c, p))
		std::cout << "is in ";
	else
		std::cout << "is out ";
	std::cout << "triangle " << a << " " << b << " "<< c << std::endl;
}

int main()
{
	Point const a(0, 0);
	Point b(0, 3);
	Point c(3,0);

	output(a, b, c, Point(-1, 1));
	// output(a, b, c, Point(1, 1.9f));
	// output(a, b, c, Point(-1, 1));
	// output(a, b, c, Point(20, 20));
	
	return 0;
}

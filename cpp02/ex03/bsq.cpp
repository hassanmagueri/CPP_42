/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsq.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emagueri <emagueri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 18:31:19 by emagueri          #+#    #+#             */
/*   Updated: 2024/09/28 18:31:19 by emagueri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
#include "Fixed.hpp"

float getArea(Point p1, Point p2, Point p3)
{
	float area;

	float n = (p1.getX() * (p2.getY() - p3.getY())).toFloat()
			+ (p2.getX() * (p3.getY() - p1.getY())).toFloat()
			+ (p3.getX() * (p1.getY() - p2.getY())).toFloat();
	if (n < 0)
		n = n * float(-1);
	area = float(0.5f) * n;
	return (area);
}

bool bsp(Point const a, Point const b, Point const c, Point const point)
{
	float area = getArea(a,b,c);
	float area1 = getArea(a,b,point);
	float area2 = getArea(a,point,c);
	float area3 = getArea(point,b,c);

	if (area1 == 0 || area2 == 0 || area2 == 0)
		return (false);
	if ((area1 + area2 + area3) == area)
		return (true);
	return (false);
}

int main()
{
	Point a(0,0);
	Point b(0,5);
	Point c(5,0);

	Point p = Point(1.f, 0.002f);

	std::cout << p.getY() << std::endl;
	
	if (bsp(a, b, c, p))
		std::cout << "is in\n";
	else
		std::cout << "is out\n";
	return 0;
}

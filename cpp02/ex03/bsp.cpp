/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emagueri <emagueri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 18:23:07 by emagueri          #+#    #+#             */
/*   Updated: 2024/09/30 18:23:09 by emagueri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
#include "Fixed.hpp"

Fixed getArea(Point p1, Point p2, Point p3)
{
	Fixed area;

	Fixed n = (p1.getX() * (p2.getY() - p3.getY())).toFloat() + // 110.11111111 00000000
			  (p2.getX() * (p3.getY() - p1.getY())).toFloat() + // 110.01001001 00000000
			  (p3.getX() * (p1.getY() - p2.getY())).toFloat();
	if (n < 0)
		n = n * Fixed(-1);
	area = Fixed(0.5f) * n;
	return (area);
}

bool bsp(Point const a, Point const b, Point const c, Point const point)
{
	Fixed area = getArea(a, b, c);
	Fixed area1 = getArea(a, b, point);
	Fixed area2 = getArea(a, point, c);
	Fixed area3 = getArea(point, b, c);

	if (area1 == 0 || area2 == 0 || area2 == 0)
		return (false);
	if ((area1 + area2 + area3) == area)
		return (true);
	return (false);
}

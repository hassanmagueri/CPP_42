/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emagueri <emagueri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 18:31:41 by emagueri          #+#    #+#             */
/*   Updated: 2024/09/30 12:46:42 by emagueri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point() : x(0), y(0)
{
}

Point::Point(const float x, const float y): x(x), y(y)
{
}

Point::Point(Point const &other): x(other.x), y(other.y)
{
	
}

Point &Point::operator=(const Point &)
{
	return *this;
}

Point::~Point()
{
}

std::ostream &operator<<(std::ostream &os, Point &p)
{
	os << "(" << p.getY() << ", " << p.getY() << ")";
	return os;
}

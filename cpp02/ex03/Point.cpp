/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emagueri <emagueri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 18:31:41 by emagueri          #+#    #+#             */
/*   Updated: 2024/09/28 18:31:41 by emagueri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point()
{
	x = 0;
	y = 0;
}

Point::Point(Fixed x, Fixed y)
{
	this->x = x;
	this->y = y;
}

Point::Point(Point const &other)
{
	this->x = other.x;
	this->y = other.y;
}

Point &Point::operator=(const Point &other)
{
	this->x = other.x;
	this->y = other.y;
	return *this;
}

Point::~Point()
{
}

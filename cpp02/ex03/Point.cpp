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

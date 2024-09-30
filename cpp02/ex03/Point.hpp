/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emagueri <emagueri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 18:31:43 by emagueri          #+#    #+#             */
/*   Updated: 2024/09/30 12:51:12 by emagueri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

class Point
{
private:
    Fixed const x;
    Fixed const y;

public:
    Point();
    Point(const float x, const float y);
    Point(const Point &);
    Point &operator=(const Point &);
    Fixed getX() const{return x;};
    Fixed getY() const{return y;};
    ~Point();
};
std::ostream &operator<<(std::ostream &os, Point &p);
bool bsp(Point const a, Point const b, Point const c, Point const point);
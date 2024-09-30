/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emagueri <emagueri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 18:31:43 by emagueri          #+#    #+#             */
/*   Updated: 2024/09/29 19:11:05 by emagueri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

class Point
{
private:
    Fixed x;
    Fixed y;

public:
    Point();
    Point(Fixed x, Fixed y);
    Point(const Point &);
    Point &operator=(const Point &);
    Fixed getX() const{return x;};
    Fixed getY() const{return y;};
    ~Point();
};
bool bsp(Point const a, Point const b, Point const c, Point const point);
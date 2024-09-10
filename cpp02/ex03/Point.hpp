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

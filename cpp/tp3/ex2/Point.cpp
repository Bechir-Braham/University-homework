#include "Point.h"
#include <cmath>
double inline sqr(double a)
{
    return a * a;
}

double Point::distance(Point& p)
{
    return sqrt(sqr(p.x - x) + sqr(p.y - y));
}

Point Point::milieu(Point& p)
{
    Point tmp;
    tmp.x = 0.5 * (p.x + x);
    tmp.y = 0.5 * (p.y + y);
    return tmp;
}

#ifndef POINT_H
#define POINT_H
class Point {
public:
    double distance(Point& p);
	Point(double x,double y);
    Point& operator+=(const Point& b)
    {
	this->x = this->x + b.x;
	this->y = this->y + b.y;
	return *this;
    }
    Point milieu(Point& p);
    double x, y;
};

#endif

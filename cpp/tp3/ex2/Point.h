#ifndef POINT_H
#define POINT_H
class Point
{
    public:
    double x, y;

    double distance (Point &p);
    Point* operator+= (const Point &b)
    {
        this->x = this->x + b.x;
        this->y = this->y + b.y;
		return this;
        
    }
    Point milieu (Point &p);
};

#endif

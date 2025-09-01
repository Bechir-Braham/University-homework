#ifndef POINT_H
#define POINT_H
class Point {
public:
    double x, y;

    double distance(Point& p);

    Point milieu(Point& p);
};

#endif

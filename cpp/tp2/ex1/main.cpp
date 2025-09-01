#include "Point.h"
#include <iostream>
using namespace std;
int main()
{
    Point p1, p2, result;
    p1.x = 11.20;
    p1.y = 4.22;
    p2.x = 0.11;
    p2.y = -4.34;
    result = p1.milieu(p2);
    cout << "distance= " << p1.distance(p2) << endl;
    cout << "milieu= ( " << result.x << " , " << result.y << " )" << endl;
    return 0;
}

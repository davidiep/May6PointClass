#include <iostream>
#include "Point.h"
using namespace std;

double Distance(Point Point1, Point Point2) {
    double distance;
    double x1 = Point1.GetX();
    double x2 = Point2.GetX();
    double y1 = Point1.GetY();
    double y2 = Point2.GetY();
    double z1 = Point1.GetZ();
    double z2 = Point2.GetZ();

    distance = sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2) + pow((z2 - z1), 2));
    return distance;

}

int main() {

    Point p1(1,2,3);
    Point p2(4,5,6);
    Point p3;
    p3.SetX(7);
    p3.SetY(8);
    p3.SetZ(9);
    //p2.SetX(17.17);
    //p2.SetY(6.6);
    //p2.SetZ(2.2);

    cout << p3.ToString() << endl;
    cout << p3.GetX() << endl;
    cout << p3.GetY() << endl;
    cout << p3.GetZ() << endl;
    cout << Distance(p1,p2) << endl;

    return 0;
}

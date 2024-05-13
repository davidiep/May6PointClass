//
// Created by David Diepersloot on 5/6/24.
//

#ifndef MAY6CLASS_POINT_H
#define MAY6CLASS_POINT_H
#include <string>
using std::string;

class Point {
private:
    double _x;
    double _y;
    double _z;
public:
    Point();
    Point(double X, double Y, double Z);
    double GetX()const;
    double GetY()const;
    double GetZ()const;
    void SetX(double X);
    void SetY(double Y);
    void SetZ(double Z);
    string ToString()const;
    string PrintHappyFace() const;
};


#endif //MAY6CLASS_POINT_H

//
// Created by David Diepersloot on 5/6/24.
//

#include "Point.h"
#include <sstream>
using std::stringstream;

Point::Point() {
    _x = 0;
    _y = 0;
    _z = 0;
}

Point::Point(double X, double Y, double Z) {
    _x = X;
    _y = Y;
    _z = Z;
}

double Point::GetX() const {
    return _x;
}

double Point::GetY() const {
    return _y;
}

double Point::GetZ() const {
    return _z;
}

void Point::SetX(double X) {
    _x = X;
}

void Point::SetY(double Y) {
    _y = Y;
}

void Point::SetZ(double Z) {
    _z = Z;
}

string Point::ToString()const {
    stringstream sstrm;
    sstrm << "(" << _x << ", " << _y << ", " << _z << ")";
    return sstrm.str();
}

string Point::PrintHappyFace() const {
    return ":D";
}

#include "Point.h"
#include<iostream>
using namespace std;
Point::Point()
{
    x = 0;
    y = 0;
}

Point::Point( int _x, int _y)
{
    x = _x;
    y = _y;
}


void Point::print() const
{
    cout << "("<< x << ", "<< y << ")";
}

void Point::setPoint(int _x, int _y)
{
    x = _x;
    y = _y;
}


Point::~Point()
{
    //dtor
}

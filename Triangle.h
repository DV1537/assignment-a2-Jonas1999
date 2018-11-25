#include "Shape.h"
#include "Point.h"
#ifndef TRIANGLE_H
#define TRIANGLE_H

class Triangle : public Shape
{
    public: 
    Triangle();
    Triangle(Point* d, int n);
    Triangle(Point p1, Point p2, Point p3);
};
#endif
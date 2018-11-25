#include "Shape.h"
#ifndef LINE_H
#define LINE_H

class Line: public Shape{
    public:
        Line(Point* d, int n);
        Line(Point p1, Point p2);
};
#endif
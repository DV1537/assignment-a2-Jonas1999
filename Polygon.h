#include "Shape.h"
#ifndef POLYGON_H
#define POLYGON_H

class Polygon: public Shape{
    public:
        Polygon(Point* d, int n);
};

#endif
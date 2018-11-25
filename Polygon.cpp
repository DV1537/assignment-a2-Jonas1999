#include <iostream>
#include "Shape.h"
#include "Point.h"
#include "Polygon.h"

Polygon::Polygon(Point* d, int n){
    setDots(d);
    setNums(n);
}
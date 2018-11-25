#include <iostream>
#include <string>
#include <cmath>
#include "Shape.h"
#include "Point.h"
#include "Line.h"

Line::Line(Point* d, int n){
    if(n >= 2){
        setDots(new Point[2]);
        getDots()[0] = d[0];
        getDots()[1] = d[1];
        setNums(2);
    }else{
        setNums(0);
    }
}

Line::Line(Point p1, Point p2){
    setDots(new Point[2]);
    getDots()[0] = p1;
    getDots()[1] = p2;
    setNums(2);
}
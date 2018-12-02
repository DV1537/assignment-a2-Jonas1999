#include <string>
#include <iostream>
#include "Point.h"
#ifndef SHAPE_H
#define SHAPE_H

class Shape{
    public:
    Shape(Point* d, int n);
    Shape();
    int nums = 0;
    std::string getType(int nums);//returns a string denoting type of a shape (point, line, polygon ..)
    double area();//returns area of the object, or -1 if the shape is concave, intersecting, or does not have an area
    double circumreference();//returns circumreference of the object
    Point position();//returns center coordinates of the object
    bool isConvex();//returns true if shape is convex
    double distance(Shape s);//returns distance to the center of another shape
    
    Point* getDots();
    void setDots(Point* dots);
    int getNums();
    void setNums(int nums);

    private:
    Point* dots;
    int n;

};

#endif
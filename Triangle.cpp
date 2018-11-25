#include "Triangle.h"
#include "Point.h"

Triangle::Triangle(){
    setNums(0);
}

Triangle::Triangle(Point* d, int n){
    if(n >= 3){
        Point* nDots = new Point[3];
        nDots[0] = d[0];
        nDots[1] = d[1];
        nDots[2] = d[2];
        setDots(nDots);
        setNums(3);
    }else{
        setNums(0);
    }
}
Triangle::Triangle(Point p1, Point p2, Point p3){
    setDots(new Point[3]);
    getDots()[0] = p1;
    getDots()[1] = p2;
    getDots()[2] = p3;
    setNums(3);
}
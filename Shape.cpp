#include <iostream>
#include <string>
#include "Shape.h"
#include "Point.h"
#include <cmath>

using namespace std;

Shape::Shape(Point* d, int nums){
    dots = d;
    n = nums;
}

string Shape::getType(int nums){
    int shapeType = nums / 2;
    switch(shapeType) {
    case 1 : cout << "Dot";
             break;
    case 2 : cout << "Line";
             break;
    case 3 : cout << "Triangle";
             break;
    default: cout << "Polygon";
            break;
}
return NULL;
}

double Shape::area(){
    double area = -1;
    Point* myPoints = dots;
    int nums = n;
    double dotsTotalValue = 0;
    
    if(n > 2){//inspiration from the shoelace formula
for (int c = 0; c < n; c++) {
		    int dotAfter = 0, dotBefore = 0;//the dot value before and after the current dot
		    if (c == 0) {//the dot is first in the list
		    	dotAfter = c - 1;
		    	dotBefore = 1;
		    } 
            else if (c == n - 1) {//the dot is in the end of the list
		    	dotAfter = c - 1;
		    	dotBefore = 0;
		    }
            else {// the dot is between first and last place in the list
		    	dotAfter = c - 1;
		    	dotBefore = c + 1;
		    }
		    double dotValue = dots[c].getX() * (dots[dotBefore].getY() - dots[dotAfter].getY());

		    dotsTotalValue += dotValue;
}
area = fabs(dotsTotalValue) / 2;
        area = round(area * 1000) / 1000;
}
    return area;
}

double Shape::circumreference(){
    
return NULL;
}

Point Shape::position(){//calculates the average of all x and y coordinates
double sumXCords = 0, sumYCords = 0;
    for (int c = 0; c < n; c++) {
		sumXCords += dots[c].getX();
        sumYCords += dots[c].getY();
	}

return Point(sumXCords / n, sumYCords / n);
}

bool Shape::isConvex(){
    
return NULL;
}

double Shape::distance(Shape s){

    return NULL;
}




Point* Shape::getDots(){
    return dots;
}
void Shape::setDots(Point* dots){
    this->dots = dots;
}
int Shape::getNums(){
    return n;
}
void Shape::setNums(int nums){
    n = nums;
}

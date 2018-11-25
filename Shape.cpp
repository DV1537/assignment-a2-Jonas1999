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
    case 1 : cout << "dot";
             break;
    case 2 : cout << "line";
             break;
    case 3 : cout << "triangle";
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
    
    if(n > 2){//WIP






    }
    return area;
}

double Shape::circumreference(){
    
return NULL;
}

double Shape::position(){

return NULL;
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

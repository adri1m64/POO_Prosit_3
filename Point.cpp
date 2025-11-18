#include "Point.h"

#include <iostream>
#include <math.h>

double Point::getX(){
    return x;
}
double Point::getY(){
    return y;
}

void Point::setX(double x_){
    x = x_;
}
void Point::setY(double y_){
    y = y_;
}

double Point::distance(Point p2){
    return sqrt((x-p2.x)*(x-p2.x)+(y-p2.y)*(y-p2.y));
}
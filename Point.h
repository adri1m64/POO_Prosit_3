#ifndef POINT_H
#define POINT_H

#include <iostream>

class Point{
    private:
        double x;
        double y;
    
    public:
        Point(double X, double Y): x(X), y(Y) {}

        //getters
        double getX();
        double getY();

        //setters
        void setX(double x_);
        void setY(double y_);

        //Methods
        double distance(Point p2);
};

#endif
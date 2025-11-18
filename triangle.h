#include <iostream>
#ifndef TRIANGLE_H
#define TRIANGLE_H
#include "Polygone.h"
#include "Point.h"

using namespace std;



class Triangle : public Polygone{
private:
    double aire;

public:
    Triangle(Point p1, Point p2, Point p3) : Polygone(p1, p2,p3) {}

    double Aire(Point p1, Point p2, Point p3);

    void afficher();

};


#endif
#include <iostream>
#include <cmath>
#include "triangle.h"
using namespace std;

double Triangle::Aire(Point p1, Point p2, Point p3){
    //(base*hauteur)/2
    double a = p1.distance(p2);  // base
    double numerator = Math.abs((p2.getX() - p1.getX()) * (p1.getY() - p3.getY()) - (p1.getX() - p3.getX()) * (p2.getY() - p1.getY()));
    double h = numerator / a; 
    aire = (a * h) / 2;
    return aire;

    
}

void Traingle::afficher() {
    cout<<"L'aire du triangle est : " << aire << endl 
}
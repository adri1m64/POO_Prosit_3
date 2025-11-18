#include <iostream>
#include "Point.h"
#ifndef RECTANGLE_H
#define RECTANGLE_H
class Rectangle {
private:
    double longueur;
    double largeur;
    Point origine;
    Point p2;

public:
    // Constructor
    Rectangle(double lon, double lar, Point org, Point p2)
        : longueur(lon), largeur(lar), origine(org), p2(p2) {}

    // Getters
    double getLongueur();
    double getLargeur();
    Point getOrigine();
    Point getP2();
    double calculerAire();
    void afficher();
};

#endif
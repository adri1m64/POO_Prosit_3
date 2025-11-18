#include <iostream>
#ifndef CARRE_H
#define CARRE_H
#include "Polygone.h"
#include "Point.h"

using namespace std;

class Carre: public Polygone {
    private:

        double cote;
        Point vecteurDirection;

    public:

    Carre(Point p1, Point p2, double c) : Polygone(p1, p2) {}

    void getCote(double c);

    void Aire(double c);

    void afficher();
    
};
#endif
#ifndef TRIANGLE_H
#define TRIANGLE_H

#include "Polygone.h"
#include "Point.h"
#include <vector>

using namespace std;

class Triangle : public Polygone {
public:
    // Constructeur avec 3 points
    Triangle(Point p1, Point p2, Point p3);

    // Implémentation des méthodes virtuelles
    double calculerAire() const override;
    void afficher() const override;
};

#endif
#ifndef POLYGONE_H
#define POLYGONE_H

#include "FormeGeometrique.h"


class Polygone : FormeGeometrique{
protected:
    Point* sommets;
public:
    Polygone(Point* s) : FormeGeometrique(s[0]), sommets(s) {};

    Point* getSommets();
    int getNombreSommets();

    double perimetre();
    double aire();
    void afficher();
};

#endif
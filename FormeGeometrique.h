#ifndef FORMEGEOMETRIQUE_H
#define FORMEGEOMETRIQUE_H

#include <iostream>
#include "Point.h"

using namespace std;

class FormeGeometrique{
protected:
    Point position;

public:
    FormeGeometrique(Point pos):position(pos) {};

    Point getPosition();
    void setPosition(Point pos);

    double aire();
    double perimetre();
    void afficher();

};

#endif
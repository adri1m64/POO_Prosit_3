#ifndef CERCLE_H
#define CERCLE_H

#include "FormeGeometrique.h"

class Cercle : FormeGeometrique{
    private:
    double rayon;

    public:
    Cercle(Point centre, double Rayon): FormeGeometrique(centre), rayon(Rayon) {}

    //getters
    double getRayon();

    //setters
    void setRayon(double rayon_);

    //Methods
    double aire();
    double perimetre();
    void afficher();
};

#endif
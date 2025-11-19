#ifndef CERCLE_H
#define CERCLE_H

#include "FormeGeometrique.h"

class Cercle : public FormeGeometrique {
private:
    double rayon;

public:
    Cercle(Point centre, double rayon_) : FormeGeometrique(centre), rayon(rayon_) {}

    // Getters
    double getRayon() const;

    // Setters
    void setRayon(double rayon_);

    // Méthodes override
    double calculerAire() const override;
    double calculerPerimetre() const override;
    void afficher() const override;
};

#endif
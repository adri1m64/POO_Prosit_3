#ifndef CARRE_H
#define CARRE_H

#include "Polygone.h"
#include "Point.h"

class Carre : public Polygone {
private:
    double cote;
    Point vecteurDirection;

public:
    // Constructeur : p1 = origine, p2 définit la direction
    Carre(Point p1, Point p2, double cote_);

    // Getter
    double getCote() const;

    // Implémentation des méthodes virtuelles
    double calculerAire() const override;
    void afficher() const override;

private:
    // Méthode helper pour calculer les 4 sommets
    vector<Point> calculerSommets(Point p1, Point p2, double cote_);
};

#endif
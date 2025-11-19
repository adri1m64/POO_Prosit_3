#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "Polygone.h"
#include "Point.h"

class Rectangle : public Polygone {
private:
    double longueur;
    double largeur;
    Point vecteurDirection;

public:
    // Constructeur : p1 = origine, p2 définit la direction
    Rectangle(Point p1, Point p2, double longueur_, double largeur_);

    // Getters
    double getLongueur() const;
    double getLargeur() const;

    // Implémentation des méthodes virtuelles
    double calculerAire() const override;
    void afficher() const override;

private:
    // Méthode helper pour calculer les 4 sommets
    vector<Point> calculerSommets(Point p1, Point p2, double lon, double lar);
};

#endif
#ifndef POLYGONE_H
#define POLYGONE_H

#include "FormeGeometrique.h"
#include <vector>

using namespace std;

class Polygone : public FormeGeometrique {
protected:
    vector<Point> sommets;

public:
    // Constructeur avec vector de points
    Polygone(vector<Point> points) : FormeGeometrique(points[0]), sommets(points) {}
    
    virtual ~Polygone() {}

    // Getters
    vector<Point> getSommets() const;
    int getNombreSommets() const;

    // Méthode concrète (non virtuelle pure)
    double calculerPerimetre() const override;
    
    // Méthodes virtuelles pures (à implémenter dans les classes dérivées)
    virtual double calculerAire() const = 0;
    virtual void afficher() const = 0;
};

#endif
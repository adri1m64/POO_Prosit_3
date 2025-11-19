#ifndef FORMEGEOMETRIQUE_H
#define FORMEGEOMETRIQUE_H

#include "Point.h"

class FormeGeometrique {
protected:
    Point position;

public:
    FormeGeometrique(Point pos) : position(pos) {}
    
    // IMPORTANT : Destructeur virtuel pour classe abstraite
    virtual ~FormeGeometrique() {}

    // Getters/Setters
    Point getPosition() const;
    void setPosition(Point pos);

    // Méthodes virtuelles pures (= 0 rend la classe abstraite)
    virtual double calculerAire() const = 0;
    virtual double calculerPerimetre() const = 0;
    virtual void afficher() const = 0;
};

#endif
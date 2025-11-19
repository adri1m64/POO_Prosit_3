#include "Cercle.h"
#include <iostream>
#include <cmath>

using namespace std;

double Cercle::getRayon() const {
    return rayon;
}

void Cercle::setRayon(double rayon_) {
    rayon = rayon_;
}

double Cercle::calculerAire() const {
    return M_PI * rayon * rayon;
}

double Cercle::calculerPerimetre() const {
    return 2 * M_PI * rayon;
}

void Cercle::afficher() const {
    cout << "Cercle de centre (" << position.getX() << ", " << position.getY() 
         << "), rayon = " << rayon 
         << ", aire = " << calculerAire() 
         << ", perimetre = " << calculerPerimetre() << endl;
}
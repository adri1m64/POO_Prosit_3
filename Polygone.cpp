#include "Polygone.h"
#include <cmath>

vector<Point> Polygone::getSommets() const {
    return sommets;
}

int Polygone::getNombreSommets() const {
    return sommets.size();
}

double Polygone::calculerPerimetre() const {
    double perimetre = 0.0;
    int n = sommets.size();
    
    for (int i = 0; i < n; i++) {
        // Distance entre sommet i et sommet i+1 (en boucle)
        perimetre += sommets[i].distance(sommets[(i + 1) % n]);
    }
    
    return perimetre;
}
#include "carre.h"

using namespace std;

Carre::Carre(Point p1, Point p2, double c) : Polygone(p1, p2) {
    cote = c;
}

double Carre::getCote(){
    return cote;
}

double Carre::Aire(){
    return cote*cote;
}

void Carre::afficher() {
    cout << "Cote: " << cote << endl;
}
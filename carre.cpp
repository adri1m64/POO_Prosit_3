#include "carre.h"
#include <iostream>
#include <cmath>

using namespace std;

Carre::Carre(Point p1, Point p2, double cote_)
    : Polygone(calculerSommets(p1, p2, cote_)),
      cote(cote_),
      vecteurDirection(p2.getX() - p1.getX(), p2.getY() - p1.getY()) {
}

vector<Point> Carre::calculerSommets(Point p1, Point p2, double cote_) {
    // Vecteur direction (normalisé)
    double dx = p2.getX() - p1.getX();
    double dy = p2.getY() - p1.getY();
    double distance = sqrt(dx * dx + dy * dy);
    
    if (distance == 0) {
        throw invalid_argument("p1 et p2 doivent etre differents");
    }
    
    // Vecteur unitaire dans la direction
    double ux = dx / distance;
    double uy = dy / distance;
    
    // Vecteur perpendiculaire (rotation de 90°)
    double vx = -uy;
    double vy = ux;
    
    // Construction des 4 sommets (carré = longueur = largeur = cote)
    vector<Point> sommets;
    sommets.push_back(p1); // Sommet 0
    sommets.push_back(Point(p1.getX() + ux * cote_, p1.getY() + uy * cote_)); // Sommet 1
    sommets.push_back(Point(p1.getX() + ux * cote_ + vx * cote_, 
                            p1.getY() + uy * cote_ + vy * cote_)); // Sommet 2
    sommets.push_back(Point(p1.getX() + vx * cote_, p1.getY() + vy * cote_)); // Sommet 3
    
    return sommets;
}

double Carre::getCote() const {
    return cote;
}

double Carre::calculerAire() const {
    return cote * cote;
}

void Carre::afficher() const {
    cout << "Carre:" << endl;
    cout << "Cote = " << cote << endl;
    cout << "Sommets:" << endl;
    for (int i = 0; i < 4; i++) {
        cout << "  P" << (i+1) << ": (" << sommets[i].getX() 
             << ", " << sommets[i].getY() << ")" << endl;
    }
    cout << "Aire = " << calculerAire() << endl;
    cout << "Perimetre = " << calculerPerimetre() << endl;
}
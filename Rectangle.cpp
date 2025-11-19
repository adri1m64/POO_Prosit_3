#include "Rectangle.h"
#include <iostream>
#include <cmath>

using namespace std;

Rectangle::Rectangle(Point p1, Point p2, double longueur_, double largeur_)
    : Polygone(calculerSommets(p1, p2, longueur_, largeur_)),
      longueur(longueur_),
      largeur(largeur_),
      vecteurDirection(p2.getX() - p1.getX(), p2.getY() - p1.getY()) {
}

vector<Point> Rectangle::calculerSommets(Point p1, Point p2, double lon, double lar) {
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
    
    // Construction des 4 sommets
    vector<Point> sommets;
    sommets.push_back(p1); // Sommet 0
    sommets.push_back(Point(p1.getX() + ux * lon, p1.getY() + uy * lon)); // Sommet 1
    sommets.push_back(Point(p1.getX() + ux * lon + vx * lar, 
                            p1.getY() + uy * lon + vy * lar)); // Sommet 2
    sommets.push_back(Point(p1.getX() + vx * lar, p1.getY() + vy * lar)); // Sommet 3
    
    return sommets;
}

double Rectangle::getLongueur() const {
    return longueur;
}

double Rectangle::getLargeur() const {
    return largeur;
}

double Rectangle::calculerAire() const {
    return longueur * largeur;
}

void Rectangle::afficher() const {
    cout << "Rectangle:" << endl;
    cout << "Longueur = " << longueur << ", Largeur = " << largeur << endl;
    cout << "Sommets:" << endl;
    for (int i = 0; i < 4; i++) {
        cout << "  P" << (i+1) << ": (" << sommets[i].getX() 
             << ", " << sommets[i].getY() << ")" << endl;
    }
    cout << "Aire = " << calculerAire() << endl;
    cout << "Perimetre = " << calculerPerimetre() << endl;
}
#include "Point.h"
#include "Rectangle.h"

double Rectangle::getLongueur() {
    return longueur;
}

double Rectangle::getLargeur() {
    return largeur;
}

Point Rectangle::getOrigine() {
    return origine;
}

Point Rectangle::getP2() {
    return p2;
}

double Rectangle::calculerAire() {
    return longueur * largeur;
}

void Rectangle::afficher() {
    std::cout << "Rectangle: " << std::endl;
    std::cout << "Longueur: " << longueur << std::endl;
    std::cout << "Largeur: " << largeur << std::endl;
    std::cout << "Origine: (" << origine.getX() << ", " << origine.getY() << ")" << std::endl;
    std::cout << "Point 2: (" << p2.getX() << ", " << p2.getY() << ")" << std::endl;
}
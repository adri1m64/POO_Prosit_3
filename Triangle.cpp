#include "Triangle.h"
#include <iostream>
#include <cmath>

using namespace std;

Triangle::Triangle(Point p1, Point p2, Point p3) 
    : Polygone({p1, p2, p3}) {
    // Validation : exactement 3 sommets
    if (sommets.size() != 3) {
        throw invalid_argument("Un triangle doit avoir exactement 3 sommets");
    }
}

double Triangle::calculerAire() const {
    // Formule du produit vectoriel : Aire = |((x2-x1)(y3-y1) - (x3-x1)(y2-y1))| / 2
    Point p1 = sommets[0];
    Point p2 = sommets[1];
    Point p3 = sommets[2];
    
    double aire = abs((p2.getX() - p1.getX()) * (p3.getY() - p1.getY()) - 
                      (p3.getX() - p1.getX()) * (p2.getY() - p1.getY())) / 2.0;
    
    return aire;
}

void Triangle::afficher() const {
    cout << "Triangle avec sommets:" << endl;
    for (int i = 0; i < 3; i++) {
        cout << "  P" << (i+1) << ": (" << sommets[i].getX() 
             << ", " << sommets[i].getY() << ")" << endl;
    }
    cout << "Aire = " << calculerAire() << endl;
    cout << "Perimetre = " << calculerPerimetre() << endl;
}
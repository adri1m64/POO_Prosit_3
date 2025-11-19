#include <iostream>
#include <vector>
#include "Point.h"
#include "FormeGeometrique.h"
#include "Cercle.h"
#include "Triangle.h"
#include "Rectangle.h"
#include "carre.h"

using namespace std;

int main() {
    cout << "=== Test des formes geometriques ===" << endl << endl;

    // Test Cercle
    cout << "--- Test Cercle ---" << endl;
    Point centre(0, 0);
    Cercle cercle(centre, 5.0);
    cercle.afficher();
    cout << endl;

    // Test Triangle
    cout << "--- Test Triangle ---" << endl;
    Point p1(0, 0);
    Point p2(4, 0);
    Point p3(2, 3);
    Triangle triangle(p1, p2, p3);
    triangle.afficher();
    cout << endl;

    // Test Rectangle
    cout << "--- Test Rectangle ---" << endl;
    Point r1(0, 0);
    Point r2(1, 0); // Direction vers la droite
    Rectangle rectangle(r1, r2, 5.0, 3.0);
    rectangle.afficher();
    cout << endl;

    // Test Carre
    cout << "--- Test Carre ---" << endl;
    Point c1(0, 0);
    Point c2(1, 0); // Direction vers la droite
    Carre carre(c1, c2, 4.0);
    carre.afficher();
    cout << endl;

    // Test du polymorphisme
    cout << "--- Test du polymorphisme ---" << endl;
    vector<FormeGeometrique*> formes;
    formes.push_back(new Cercle(Point(1, 1), 3.0));
    formes.push_back(new Triangle(Point(0, 0), Point(3, 0), Point(1.5, 2)));
    formes.push_back(new Rectangle(Point(0, 0), Point(1, 0), 4.0, 2.0));
    formes.push_back(new Carre(Point(0, 0), Point(1, 0), 3.0));

    for (FormeGeometrique* forme : formes) {
        forme->afficher();
        cout << endl;
    }

    // Nettoyage de la mémoire
    for (FormeGeometrique* forme : formes) {
        delete forme;
    }

    return 0;
}
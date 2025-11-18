#include "Cercle.h"
#include <iostream>
#include <math.h>

using namespace std;


double Cercle::getRayon(){
return rayon;
}


void  Cercle::setRayon(double rayon_){
rayon = rayon_;
}


double  Cercle::aire(){
return M_PI*rayon*rayon;
}

double  Cercle::perimetre(){
return 2*M_PI*rayon;
}

void  Cercle::afficher(){
cout << "Le cercle de centre x = " << position.getX() << "et y = " << position.getY() << "a un rayon r = " << rayon << ", une aire a = " << aire() << " et un perimetre p = " << perimetre() << endl;
}

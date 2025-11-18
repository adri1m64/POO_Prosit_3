#include <iostream>

#include "FormeGeometrique.h"
#include "Point.h"

Point FormeGeometrique::getPosition(){
    return position;
}

void FormeGeometrique::setPosition(Point pos){
    position = pos;
}

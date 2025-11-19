#include "Point.h"
#include <cmath>

double Point::getX() const {
    return x;
}

double Point::getY() const {
    return y;
}

void Point::setX(double x_) {
    x = x_;
}

void Point::setY(double y_) {
    y = y_;
}

double Point::distance(Point autre) const {
    return sqrt((x - autre.x) * (x - autre.x) + (y - autre.y) * (y - autre.y));
}
#ifndef POINT_H
#define POINT_H

class Point {
private:
    double x;
    double y;

public:
    // Constructeur par défaut nécessaire pour vector
    Point() : x(0), y(0) {}
    
    Point(double X, double Y) : x(X), y(Y) {}

    // Getters
    double getX() const;
    double getY() const;

    // Setters
    void setX(double x_);
    void setY(double y_);

    // Methods
    double distance(Point autre) const;
};

#endif
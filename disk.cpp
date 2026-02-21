#include "disk.h"
#include <cmath>
#include <stdexcept>

Disk::Disk(double x, double y, double r){
    this->x = x;
    this->y = y;
    setRadius(r);
}

// Getters 
double Disk::getX() {return x;}
double Disk::getY() {return y;}
double Disk::getRadius() {return radius;}

//Setters
void Disk::setX(double X) { x = X; }
void Disk::setY(double Y) { y = Y; }
void Disk::setRadius(double R) {
    if (R <= 0.0){
        throw std::invalid_argument("Radius must be positive");
    }
    radius = R;
}

void Disk::move(double dx, double dy){
    x += dx;
    y += dy;
}

double Disk::distance(const Disk& other)const{

    // HINT: COMPLETE THE CALCULATION OF THE DISTANCE BETWEEN this DISK AND THE DISK other
    double distance = std::sqrt(std::pow((x - other.x),2) + std::pow((y - other.y),2));
    return distance;

}
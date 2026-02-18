#include <disk.h>
#include <cmath>

Disk::Disk(double x, double y, double r){
    this->x = x;
    this->y = y;
    this->radius = r;
}

void Disk::move(double dx, double dy){
    this->x += dx;
    this->y += dy;
}

double Disk::distance(Disk& other){

    // HINT: COMPLETE THE CALCULATION OF THE DISTANCE BETWEEN this DISK AND THE DISK other
    double distance = std::sqrt(std::pow((x - other.x),2) + std::pow((y - other.y),2));
    return distance;

}
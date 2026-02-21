#ifndef DISK_H
#define DISK_H
class Disk {
    private:
    double x, y, radius;
    public:
    // getters for each of the private attributes
    double getX();
    double getY();
    double getRadius();

    // Setters
    void setX(double X);
    void setY(double Y);
    void setRadius(double R);

    //Constructor
    Disk(double x, double y, double r) ;

    //Public methods
    void move(double dx, double dy) ;
    double distance(const Disk& d) const ;
};
#endif // !DISK_H
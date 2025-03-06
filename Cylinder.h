#ifndef _CYLINDER
#define _CYLINDER

class Cylinder {

    public:
        Cylinder();
        Cylinder(double radiusPar, double heightPar);
        void setHeight (double heightPar);
        void setRadius (double radiusPar);
        double getHeight();
        double getRadius();
        double calcSurfaceArea(double radiusPar, double heightPar);
        double calcVolume(double radiusPar, double heightPar);

    private:
        double radius;
        double height;
};











#endif
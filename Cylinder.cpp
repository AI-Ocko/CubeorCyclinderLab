#include "Cylinder.h"
#include <iostream>
#include <cmath>

Cylinder::Cylinder(){
    radius = 0.0;
    height = 0.0;
}

Cylinder::Cylinder(double radiusPar, double heightPar) {
    if (radiusPar > 0) {
        radius = radiusPar;

    } else {
        radius = 0.0;
    }

    if (heightPar> 0) {
        height = heightPar;
    } else {
        height = 0.0;
    }
}

void Cylinder::setRadius (double radiusPar) {
    if (radiusPar > 0) {
        radius = radiusPar;

    } else {
        radius = 0;
    }
}

void Cylinder::setHeight (double heightPar) {
    if (heightPar > 0) {
        height = heightPar;

    } else {
        height = 0;
    }
}

double Cylinder::getHeight() {
    return height;
}

double Cylinder::getRadius() {
    return radius;
}


double Cylinder::calcSurfaceArea (double radiusPar, double heightPar) {
    return 2 * M_PI * radiusPar * (heightPar + radiusPar);

}

double Cylinder::calcVolume (double radiusPar, double heightPar) {
    return M_PI * pow(radiusPar, 2) * heightPar;

}


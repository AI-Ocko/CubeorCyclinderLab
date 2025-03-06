#include "Cylinder.h"
#include <iostream>
#include <cmath>

Cylinder::Cylinder(){
    radius = 0.0;
    height = 0.0;
}

Cylinder::Cylinder(double radiusPar, double heightPar) {
    if (radius > 0) {
        radius = radiusPar;

    } else {
        radius = 0.0;
    }

    if (height > 0) {
        height = heightPar;
    } else {
        height = 0.0;
    }
}

void Cylinder::setRadius (double radiusPar) {
    if (radius > 0) {
        radius = radiusPar;

    } else {
        radius = 0.0;
    }
}

void Cylinder::setHeight (double heightPar) {
    if (height > 0) {
        height = heightPar;

    } else {
        height = 0.0;
    }
}

double Cylinder::calcSurfaceArea (double radiusPar, double heightPar) {
    return 2 * M_PI * radiusPar * (heightPar + radiusPar);

}

double Cylinder::calcVolume (double radiusPar, double heightPar) {
    return M_PI * pow(radiusPar, 2) * heightPar;
    
}


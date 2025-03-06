#include "Cube.h"
#include <iostream>
#include <cmath>

Cube::Cube(){
    length = 0.0;
}

Cube::Cube(double lengthPar) {
    if (lengthPar > 0) {
        length = lengthPar;
    } else {
        length = 0;
    }
}

void Cube::setLength(double lengthPar) {
    if (lengthPar > 0) {
        length = lengthPar;
    } else {
        length = 0;
    }
}

double Cube::getLength() {
    return length;
}

double Cube::calcSurfaceArea(double lengthPar) {
    return 6.0 * pow(lengthPar, 2);
}

double Cube::calcVolume(double lengthPar) {
    return pow(lengthPar, 3); 
}
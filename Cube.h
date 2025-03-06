#ifndef _CUBE
#define _CUBE

class Cube {

    public:

    Cube();
    Cube (double lengthPar);

    void setLength (double lengthPar);
    double getLength();
    double calcSurfaceArea(double lengthPar);
    double calcVolume(double lengthPar);




    private:

    double length;
};


#endif
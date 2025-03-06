#include <iostream>
#include <string>
#include "Cube.cpp"
#include "Cylinder.cpp"

using namespace std;

int main() {

    double lengthTemp;
    double radiusTemp;
    double heightTemp;

    int choice;

    Cube cube(0.0);
    Cylinder cylinder(0.0, 0.0);

    cout << "Which shape do you want to calculate the surface area and volume?" << endl;
    cout << "1 - Cube\n" << "2 - Cylinder\n";
    cout << "Which shape do you want (1 or 2)? ";

    cin >> choice;

    if (choice == 1) {
        cout << "Enter a side valude for the cube: ";
        cin >> lengthTemp;
        cube.setLength(lengthTemp);

        lengthTemp = cube.getLength();
        cout << "The surface area for the cube is " << cube.calcSurfaceArea(lengthTemp) << endl;
        cout << "The volume for the cube is " << cube.calcVolume(lengthTemp) << endl;
    } else if (choice == 2) {
        cout << "Enter a radius value for the cylinder: ";
        cin >> radiusTemp;
        cylinder.setRadius(radiusTemp);

        cout << "Enter a height value for the cylinder: ";
        cin >> heightTemp;
        cylinder.setHeight(heightTemp);

        radiusTemp = cylinder.getRadius();
        heightTemp = cylinder.getHeight();
        cout << "The surface area for the cylinder is " << cylinder.calcSurfaceArea(radiusTemp, heightTemp) << endl;
        cout << "The volume for the cylinder is " << cylinder.calcVolume(radiusTemp, heightTemp) << endl;

    } else {
        cout << "That is not a listed choice. Please select again. (1 or 2)? ";
    }
    return 0;
}
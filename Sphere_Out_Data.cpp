#include "Sphere.h"

void Sphere::Out_Data(double Density, int Temperature, ofstream& ofst) {
    ofst << "It's a Sphere with Radius: " << Radius << endl;
    ofst << "Its Density is " << Density << endl;
    ofst << "Its Temperature of melting/burning is " << Temperature << endl << endl;
}
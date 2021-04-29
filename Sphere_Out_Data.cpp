#include "Sphere.h"

void Sphere::Out_Data(double Density, ofstream& ofst) {
    ofst << "It's a Sphere with Radius: " << Radius << endl;
    ofst << "Its Density is " << Density << endl << endl;
}
#include "Out_Sphere.h"

void Out_Sphere(double Density, Sphere* S, ofstream& ofst) {
    ofst << "It's a Sphere with Radius: " << S->Radius << endl;
    ofst << "Its Density is " << Density << endl << endl;
}
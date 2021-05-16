#include "Parallelepiped.h"

void Parallelepiped::Out_Data(double Density, int Temperature, ofstream& ofst) {
    ofst << "It's a Parallelepiped with Edges: " << A << ", " << B
        << ", " << C << endl;
    ofst << "Its Density is " << Density << endl;
    ofst << "Its Temperature of melting/burning is " << Temperature << endl;
}
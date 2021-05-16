#include "Tetrahedron.h"

void Tetrahedron::Out_Data(double Density, int Temperature, ofstream& ofst) {
    ofst << "It's a Tetrahedron with Side length: " << A << endl;
    ofst << "Its Density is " << Density << endl;
    ofst << "Its Temperature of melting/burning is " << Temperature << endl;
}
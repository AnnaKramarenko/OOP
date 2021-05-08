#include "Tetrahedron.h"

void Tetrahedron::Out_Data(double Density, ofstream& ofst) {
    ofst << "It's a Tetrahedron with Side length: " << A << endl;
    ofst << "Its Density is " << Density << endl << endl;
}
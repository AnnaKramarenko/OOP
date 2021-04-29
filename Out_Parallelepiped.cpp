#include "Out_Parallelepiped.h"

void Out_Parallelepiped(double Density, Parallelepiped* P, ofstream& ofst) {
    ofst << "It's a Parallelepiped with Edges: " << P->A << ", " << P->B 
        << ", " << P->C << endl;
    ofst << "Its Density is " << Density << endl << endl;
}
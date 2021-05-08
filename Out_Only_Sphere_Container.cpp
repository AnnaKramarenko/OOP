#include "Container.h"

void Container::Out_Only_Sphere(ofstream& ofst) {
    ofst << "Only Spheres." << endl << endl;

    Node* Temp = Head;

    for (int i = 0; i < Len; i++) {
        ofst << i << ": ";
        Temp->Cont->Out_Only_Sphere(Temp->Cont->Get_Density(), ofst);

        if (Temp->Next) {
            Temp = Temp->Next;
        }
    }
}
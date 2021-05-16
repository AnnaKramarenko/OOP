#include "Container.h"

void Container::Out(ofstream& ofst) {
    ofst << "Container contains " << Len
        << " elements." << endl << endl;

    Node* Temp = Head;

    for (int i = 0; i < Len; i++) {
        ofst << i << ": ";
        Temp->Cont->Out_Data(Temp->Cont->Get_Density(), Temp->Cont->Get_Temperature(), ofst);

        ofst << "The Figure's Volume is " << Temp->Cont->Volume() << endl << endl;

        if (Temp->Next) {
            Temp = Temp->Next;
        }
    }
}
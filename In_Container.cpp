#include "Container.h"
#include "Figure_3D.h"

void Container::In(ifstream& ifst) {
    Node* Temp;

    while (!ifst.eof()) {
        Temp = new Node(); //������� ����� ����
        //�������������� ����� ����
        Temp->Next = NULL;
        Temp->Prev = NULL;


        if (!Len) { //������ 1-�� ��������
            if ((Head->Cont = Figure_3D::In(ifst))) {
                Tail = Head;
                Len++;
            }
        }
        else { //������ ����������� ���������
            if ((Temp->Cont = Figure_3D::In(ifst))) {
                Tail->Next = Temp;
                Temp->Prev = Tail;
                Tail = Temp;
                Len++;
            }
        }
    }
}
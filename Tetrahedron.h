#ifndef TETRAHEDRON_H
#define TETRAHEDRON_H

#include "Figure_3D.h"

#include <fstream>

using namespace std;

//����� "��������"
class Tetrahedron : public Figure_3D {
    int A; //����� �������
public:
    void In_Data(ifstream& ifst); //������� ����� ���������� � ���������
    void Out_Data(double Density, int Temperature, ofstream& ofst); //������� ������ ���������� � ���������
    double Volume(); //������� �������� ������ ������
    Tetrahedron() {};
};

#endif // TETRAHEDRON_H

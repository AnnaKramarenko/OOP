#ifndef PARALLELEPIPED_H
#define PARALLELEPIPED_H

#include "Figure_3D.h"

#include <fstream>

using namespace std;

//����� "��������������"
class Parallelepiped : public Figure_3D {
    int A, B, C; //����� ���������������
public:
    void In_Data(ifstream& ifst); //������� ����� ���������� � ��������������e
    void Out_Data(double Density, int Temperature, ofstream& ofst); //������� ������ ���������� � ���������������
    Parallelepiped() {};
};

#endif // PARALLELEPIPED_H

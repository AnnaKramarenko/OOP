#ifndef SPHERE_H
#define SPHERE_H

#include "Figure_3D.h"

#include <fstream>

using namespace std;

//����� "���"
class Sphere : public Figure_3D {
    int Radius; //������ ����
public:
    void In_Data(ifstream& ifst); //������� ����� ���������� � ����
    void Out_Data(double Density, int Temperature, ofstream& ofst); //������� ������ ���������� � ����
    Sphere() {};
};

#endif // SPHERE_H

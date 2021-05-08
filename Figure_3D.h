#ifndef FIGURE_3D_H
#define FIGURE_3D_H

#include <fstream>

using namespace std;

class Figure_3D {
    double Density;
public:
    double Get_Density(); //������� ��������� �������� ��������� ��������� ������

    static Figure_3D* In(ifstream& ifst); //������� ����� ���������� � ������
    virtual void In_Data(ifstream& ifst) = 0; //����� ����������� ������� ����� ����������
                                              //� ������, ��� ����� ���������� ���
                                              //������� ������ ���������� ������
    virtual void Out_Data(double Density, ofstream& ofst) = 0; //����� ����������� ������� ������ ����������
                                              //� ������, ��� ����� ���������� ���
                                              //������� ������ ���������� ������
    virtual void Out_Only_Sphere(double Density, ofstream& ofst); //������� ������ ������ �����
protected:
    Figure_3D() {};
};

#endif // FIGURE_3D_H

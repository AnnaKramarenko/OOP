#ifndef FIGURE_3D_H
#define FIGURE_3D_H

#include <fstream>

using namespace std;

class Figure_3D {
    double Density;
    int Temperature;
public:
    double Get_Density(); //������� ��������� �������� ��������� ��������� ������
    int Get_Temperature(); //������� ��������� �������� ����������� ���������/������� ��������� ������

    static Figure_3D* In(ifstream& ifst); //������� ����� ���������� � ������
    virtual void In_Data(ifstream& ifst) = 0; //����� ����������� ������� ����� ����������
                                              //� ������, ��� ����� ���������� ���
                                              //������� ������ ���������� ������
    virtual void Out_Data(double Density, int Temperature, ofstream& ofst) = 0; //����� ����������� ������� ������ ����������
                                              //� ������, ��� ����� ���������� ���
                                              //������� ������ ���������� ������
    virtual double Volume() = 0; //������� �������� ������ ������
    bool Compare(Figure_3D* Other); //������� ��������� ������� �����
protected:
    Figure_3D() {};
};

#endif // FIGURE_3D_H

#ifndef TETRAHEDRON_H
#define TETRAHEDRON_H

#include "Figure_3D.h"

#include <fstream>

using namespace std;

//Класс "тетраэдр"
class Tetrahedron : public Figure_3D {
    int A; //Длина стороны
public:
    void In_Data(ifstream& ifst); //Функция ввода информации о тетраэдре
    void Out_Data(double Density, int Temperature, ofstream& ofst); //Функция вывода информации о тетраэдре
    double Volume(); //Функция подсчета объема фигуры
    Tetrahedron() {};
};

#endif // TETRAHEDRON_H

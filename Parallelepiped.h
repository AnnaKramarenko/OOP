#ifndef PARALLELEPIPED_H
#define PARALLELEPIPED_H

#include "Figure_3D.h"

#include <fstream>

using namespace std;

//Класс "параллелепипед"
class Parallelepiped : public Figure_3D {
    int A, B, C; //Ребра параллелепипеда
public:
    void In_Data(ifstream& ifst); //Функция ввода информации о параллелепипедe
    void Out_Data(double Density, int Temperature, ofstream& ofst); //Функция вывода информации о параллелепипеде
    Parallelepiped() {};
};

#endif // PARALLELEPIPED_H

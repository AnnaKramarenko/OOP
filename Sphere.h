#ifndef SPHERE_H
#define SPHERE_H

#include "Figure_3D.h"

#include <fstream>

using namespace std;

//Класс "шар"
class Sphere : public Figure_3D {
    int Radius; //Радиус шара
public:
    void In_Data(ifstream& ifst); //Функция ввода информации о шаре
    void Out_Data(double Density, int Temperature, ofstream& ofst); //Функция вывода информации о шаре
    Sphere() {};
};

#endif // SPHERE_H

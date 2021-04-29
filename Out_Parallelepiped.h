#ifndef OUT_PARALLELEPIPED_H
#define OUT_PARALLELEPIPED_H

#include "Parallelepiped.h"
#include <fstream>

using namespace std;

//Функция вывода информации о параллелепипеде
void Out_Parallelepiped(double Density, Parallelepiped* P, ofstream& ofst);

#endif // OUT_PARALLELEPIPED_H
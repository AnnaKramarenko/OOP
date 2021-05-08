#ifndef FIGURE_3D_H
#define FIGURE_3D_H

#include <fstream>

using namespace std;

class Figure_3D {
    double Density;
public:
    double Get_Density(); //Функция получения значения плотности материала фигуры

    static Figure_3D* In(ifstream& ifst); //Функция ввода информации о фигуре
    virtual void In_Data(ifstream& ifst) = 0; //Чисто вирутальная функция ввода информации
                                              //о фигуре, она будет определена для
                                              //каждого класса конкретной фигуры
    virtual void Out_Data(double Density, ofstream& ofst) = 0; //Чисто вирутальная функция вывода информации
                                              //о фигуре, она будет определена для
                                              //каждого класса конкретной фигуры
    virtual void Out_Only_Sphere(double Density, ofstream& ofst); //Функция вывода только шаров
protected:
    Figure_3D() {};
};

#endif // FIGURE_3D_H

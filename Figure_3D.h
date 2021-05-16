#ifndef FIGURE_3D_H
#define FIGURE_3D_H

#include <fstream>

using namespace std;

class Figure_3D {
    double Density;
    int Temperature;
public:
    double Get_Density(); //Функция получения значения плотности материала фигуры
    int Get_Temperature(); //Функция получения значения температуры плавления/горения материала фигуры

    static Figure_3D* In(ifstream& ifst); //Функция ввода информации о фигуре
    virtual void In_Data(ifstream& ifst) = 0; //Чисто вирутальная функция ввода информации
                                              //о фигуре, она будет определена для
                                              //каждого класса конкретной фигуры
    virtual void Out_Data(double Density, int Temperature, ofstream& ofst) = 0; //Чисто вирутальная функция вывода информации
                                              //о фигуре, она будет определена для
                                              //каждого класса конкретной фигуры
    virtual double Volume() = 0; //Функция подсчета объема фигуры
    bool Compare(Figure_3D* Other); //Функция сравнения объемов фигур
protected:
    Figure_3D() {};
};

#endif // FIGURE_3D_H

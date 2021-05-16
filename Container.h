#ifndef CONTAINER_H
#define CONTAINER_H

#include "Node.h"
#include <fstream>
#include <iostream>

using namespace std;

//Контейнер
class Container {
    Node* Head, * Tail; //Указатели на "голову" и "хвост" контейнера
    int Len; //Размерность контейнера
public:
    void In(ifstream& ifst); //Функция ввода элемента в контейнер
    void Out(ofstream& ofst); //Функция вывода элемента из контейнера
    void Clear(); //Функция очищения контейнера
    void Sort(); //Функция сортировки контейнера
    void Out_Only_Sphere(ofstream& ofst); //Функция вывода только шаров
    Container(); //Конструктор
    ~Container() { Clear(); } //Деструктор
};

#endif //CONTAINER_H
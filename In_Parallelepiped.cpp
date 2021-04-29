#include "In_Parallelepiped.h"

void* In_Parallelepiped(ifstream& ifst) {
    Parallelepiped* P = new Parallelepiped; //Выделяем память под паралеллепипед
    
    //Считываем ребра параллелепипеда
    ifst >> P->A;
    ifst >> P->B;
    ifst >> P->C;

    return P;
}
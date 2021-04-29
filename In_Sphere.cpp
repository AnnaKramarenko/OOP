#include "In_Sphere.h"

void* In_Sphere(ifstream& ifst) {
    Sphere* S = new Sphere; //Выделяем память для шара

    ifst >> S->Radius; //Считывает радиус
    
    return S;
}
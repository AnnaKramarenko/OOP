#include "Parallelepiped.h"

void Parallelepiped::In_Data(ifstream& ifst) {
    //—читываем данные о ребрах параллелепипеда
    ifst >> A;
    ifst >> B;
    ifst >> C;
}
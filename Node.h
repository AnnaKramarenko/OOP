#ifndef NODE_H
#define NODE_H

#include "Figure_3D.h"

//”зел контейнера
struct Node {
    Node* Next, * Prev; //”казатель на следующий и предыдущий элементы контейнера
    Figure_3D* Cont; //”казатель на фигуру
};

#endif //NODE_H
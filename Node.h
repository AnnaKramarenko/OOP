#ifndef NODE_H
#define NODE_H

#include "Figure_3D.h"

//���� ����������
struct Node {
    Node* Next, * Prev; //��������� �� ��������� � ���������� �������� ����������
    Figure_3D* Cont; //��������� �� ������
};

#endif //NODE_H
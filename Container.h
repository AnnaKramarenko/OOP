#ifndef CONTAINER_H
#define CONTAINER_H

#include "Node.h"
#include <fstream>
#include <iostream>

using namespace std;

//���������
class Container {
    Node* Head, * Tail; //��������� �� "������" � "�����" ����������
    int Len; //����������� ����������
public:
    void In(ifstream& ifst); //������� ����� �������� � ���������
    void Out(ofstream& ofst); //������� ������ �������� �� ����������
    void Clear(); //������� �������� ����������
    void Sort(); //������� ���������� ����������
    Container(); //�����������
    ~Container() { Clear(); } //����������
};

#endif //CONTAINER_H
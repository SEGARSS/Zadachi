/*
������ �20
�������� ���������, 
������� ��������� �� ���� ���������� ���� ����� � 
������� ���������� ����� ���� � 2D ������������.
*/

#include <iostream>
using namespace std;


void main()
{
    setlocale(LC_ALL, "ru");
    double x1, y1, x2, y2;
    cout << "������� ��������� ������ �����: - ";
    cin >> x1 >> y1;
    cout << "������� ��������� ������ �����: - ";
    cin >> x2 >> y2;
    double rast;
    /*�����������. �����������, ��������� (pow((x2 - x1), 2) �� ������� �������� � ������� ��, ����� �������
    ���������� ����� � �������. ������� pow � 2 � ������� � ��� ����� ����� �������� � �������. ����� ������
    ��� ���������, ���� ������� ��������� (������� �� ��������)*/
    rast = sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));
    cout << "���������� ����� �������: " << rast << endl;


}
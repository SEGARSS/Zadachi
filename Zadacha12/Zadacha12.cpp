/*
������ �12
�������� ���������, 
������� ����� ��������� �� ���� ��� ����� � ��������, 
�������� �� ������ ����� ������� �������.
���� ������ ����� �������� �������, �� ��������� ������� ������� �� �������.
*/

#include <iostream>
using namespace std;


void main()
{
    setlocale(LC_ALL, "ru");
    cout << "���������� ������ ��� �����:" << endl;
    int a;
    cout << "������� ������ ����� - ";
    cin >> a;
    int b;
    cout << "������� ������ ����� - ";
    cin >> b;

    /*����� ������, ������� ����� ���� � �������, �������� �� ��������. ������, ���� �� � �������,
    ����� ������ ����� 27 � ����� 9, �� �� ����� 27 �� 9 �� ����� 3, ������ ��� �������*/
    int cra = a % b;
    if (cra == 0)
    {
        cout << "������ ����� ������� �������";
    }
    else
    {
        cout << "������ ����� �� ������� ������� � ��� ������� = " << cra;
    }

    // ������ ��������� ��������, �� ���� ���� ������������� ������ ��������� ����� � ���� �����.
}
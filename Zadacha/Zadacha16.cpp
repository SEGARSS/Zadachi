/*
������ �16
�������� ���������, 
������� ��������� �� ���� ��� ����� � ���������, 
�������� �� ���� ����� ��������� �������.
*/


#include <iostream>
using namespace std;

void main()
{
    setlocale(LC_ALL, "ru");
    int a,b;
    cout << "������� ��� �����" << endl;
    cout << "������� ������ ����� - ";
    cin >> a;
    cout << "������� ������ ����� - ";
    cin >> b;
    if (a == b*b)
    {
        cout << "����� - " << a << " �������� ��������� ����� - " << b << endl;
    }
    else
    {
        cout << "����� - " <<a<< " �� ��������� �������� ����� - " << b;
    }
}
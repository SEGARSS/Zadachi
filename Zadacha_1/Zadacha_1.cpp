/*
������ �1
�������� ���������, 
������� �� ���� ��������� ��� ����� � ���������,
�������� �� ������ ����� ��������� �������.
*/

#include <iostream>
using namespace std;


void main()
{
    setlocale(LC_ALL, "ru");
    int num1, num2;
    cout << "������� ��� �����:" << endl;
    cout << "������� ������ ����� - ";
    cin >> num1;
    cout << "������� ������ ����� - ";
    cin >> num2;
    if (num1 * num1 == num2)
    {
        cout << "��, ��������� ���������!" << endl;
    }
    else
    {
        cout << "���, �� ��������� ���������!" << endl;
    }
}
  
  
    


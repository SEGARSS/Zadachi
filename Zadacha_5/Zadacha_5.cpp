/*
������ �5
�������� ���������, 
������� ����� �������� �������� ��� ������ �� ��������� ������.
*/

#include <iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "ru");
    
    int day;
    cout << "������� ����� ������ - ";
    cin >> day;

    switch (day) 
    {
    case 1:
        cout << day << " - ��� �����������";
    case 2:
        cout << day << " - ��� �������";
        break;
    case 3:
        cout << day << " - ��� �����";
        break;
    case 4:
        cout << day << " - ��� �������";
        break;
    case 5:
        cout << day << " - ��� �������";
        break;
    case 6:
        cout << day << " - ��� �������";
        break;
    case 7:
        cout << day << " - ��� �����������";
        break;
    default:
        cout << "������: �������� ����� ��� ������"; 
    }
}
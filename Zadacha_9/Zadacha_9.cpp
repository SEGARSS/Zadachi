/*
������ 9:
������� ���� ����� �� 10-100 
� �������� ��� ���� �����
*/

#include<iostream>
using namespace std;

void main()
{
    setlocale(LC_ALL, "Ru");
    // ������������� ���������� ��������� �����
    int num = rand() % 91 + 10; // ��������� ����� �� 10 �� 100
    cout << "��������������� �����: " << num << endl;
    int max_digit = 0;
    if (num > max_digit)
    {
        cout << "������������ - " << num;
    }
}
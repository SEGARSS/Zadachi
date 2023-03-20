/*
������ 9:
������� ���� ����� �� 10-100 
� �������� ��� ���� �����
*/

#include<iostream>
using namespace std;

void main()
{
    setlocale(LC_ALL, "ru");
    srand(time(NULL)); // ������������� ���������� ��������� �����, ���� ������, ����� ���� � ���� �����.
    int num = rand() % 91 + 10; // ��������� ����� �� 10 �� 100
    cout << "��������������� �����: " << num << endl;
    int max_digit = 0;
    while (num > 0) { // ������� ���� �����
        int digit = num % 10;
        if (digit > max_digit) // ���� ����� ������ ������� ������������
        { 
            max_digit = digit; // ��������� ������������ �����
        }
        num /= 10; // ��������� � ��������� �����
    }
    cout << "���������� �����: " << max_digit << endl;
    return ;
}
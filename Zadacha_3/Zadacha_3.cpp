/*
������ �3
�������� ���������, ������� �� ���� ��������� ���� ����� (N),
� �� ������ ���������� ��� ����� ����� � ���������� �� -N �� N.
*/

#include<iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "ru");
    int n;
    cout << "������� ����� N: ";
    cin >> n;
    for (int i = -n; i <= n; i++) 
    {
        cout << i << " ";
    }
    return;

}
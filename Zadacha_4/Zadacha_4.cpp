/*
������ �4
�������� ���������,
������� ��������� �� ���� ���������� ����� � �� ������ ���������� ��������� ����� ����� �����.
*/

#include<iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "ru");
	int b;
	cout << "������� ��� ������� ����� - ";
	cin >> b;
	if (b > 99 && b < 1000)
	{
		int c = b % 10;
		cout << " ��������� ����� - " << c << endl;
	}
	else
	{
		cout << "����� �� ��������� ����������";
	}
	
}
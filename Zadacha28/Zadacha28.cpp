/*
������ �28
�������� ���������, 
������� ��������� �� ���� ����� N � ����� 
������������ ����� �� 1 �� N.
*/

#include<iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "RU");

	int n;
	cout << "������� �����: ";
	cin >> n;
	int result = 1;

	for (int i = 1; i <= n; i++) 
	{
		result *= i;
	}

	cout << "������������ ����� �� 1 �� N ����� " << result << endl;
		
}
/*
������ �22
�������� ���������, ������� ��������� �� ���� ����� (N) 
� ����� ������� ��������� ����� �� 1 �� N.
��������� � ������ �����, � ��� ���� - ��������*/

#include <iostream>
using namespace std;

int umg(int a, int b) //������� ������� ��������� ��� ���������� ����� � �������.
{
	int result;
	result = a * b; 
	return result;
}

void main()
{
    setlocale(LC_ALL, "ru");
    int n;
    cout << "������� �����: - ";
    cin >> n;
	
	for (int i = 1; i <= n; i++) // ������� � �������� ��� ����� �� 1 �� N. ������� int i = 1; �� ������� ������.
	{
		cout << i << " ";
	}
	cout << endl;
	for (int i = 1; i <= n; i++)//�������� � ������� ��� ����� �� 1 �� N � ���������� � ���������.
	{
		cout << umg(i, i) << " ";
	}
	cout << endl;

}


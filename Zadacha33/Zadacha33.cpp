/*
������ 33.
������� ������. 
�������� ���������, 
������� ����������, 
������������ �� �������� ����� � �������.
*/

#include<iostream>
#include<ctime>
using namespace std;

void FillArray(int arr[], const int SIZE)
{
	for (int i = 0; i < SIZE; i++)
	{
		arr[i] = rand() % 10;
	}
}

void PrintArra(int arr[], const int SIZE)
{
	cout << "������:      ";
	for (int i = 0; i < SIZE; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}

void main()
{
	setlocale(LC_ALL, "ru");

	const int SIZE = 10;
	int arr[SIZE];
	FillArray(arr, SIZE);
	PrintArra(arr, SIZE);
	int che;
	cout << "������� �����: ";
	cin >> che;
	bool found = false;/*��� �������� �������, ��� ���� ����� ������� �����, �������� ��� � ������� ����� ��������
	�� ������� � ���������� found � ����������� false �� �������.*/
	for (int i = 0; i < SIZE; i++)
	{
		if (arr[i] == che)
		{
			found = true;
			break;
		}
	}
	if (found)
	{
		cout << "����� ����� ������������ � �������:";
	}
	else
	{
		cout << "������ ����� ��� � �������:";
	}
}



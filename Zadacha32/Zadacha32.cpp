/*
������ 32.
�������� ��������� ������ ��������� �������: 
������������� �������� �������� �� ��������������� �������������, 
� ��������.
*/
#include<iostream>
#include<ctime>
using namespace std;

void FillArray(int arr[], const int SIZE)
{
	for (int i = 0; i < SIZE; i++)
	{
		arr[i] = rand() % 19 - 9;
	}
}

void PrintArra(int arr[], const int SIZE)
{
	cout << "����������� ������:      ";
	for (int i = 0; i < SIZE; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}

void main()
{
	setlocale(LC_ALL, "ru");
	srand(time(NULL));
	const int SIZE = 10;
	int arr[SIZE];
	FillArray(arr, SIZE);
	PrintArra(arr, SIZE);
	for (int i = 0; i < SIZE; i++)
	{
		if (arr[i] > 0)
		{
			arr[i] = - arr[i];
		}
		else if (arr[i] < 0)
		{
			arr[i] = - arr[i];
		}
	}
	cout << "���������������� ������: ";
	for (int i = 0; i < SIZE; i++) 
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}
/*��� �������, �� ����� ���� � ����� ��� ���������, ��� ���� arr[i] ������� ������� ������ 0, � ������
�������������, �� �������� ��� - arr[i];(������������� ��������.
� ���� arr[i] < 0 ��� ������ ��� ������� � �������������� �������, �� ����� �������� - arr[i], ��� ���
���� �� ����� +, � ������� �� �������� �������������.*/


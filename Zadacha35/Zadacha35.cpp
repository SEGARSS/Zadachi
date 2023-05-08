/*
������ �35
������� ���������� ������ �� 123 ��������� �����. 
������� ���������� ��������� �������, 
�������� ������� ����� � ������� [10,99].
*/

#include<iostream>
#include<ctime>
using namespace std;

void FillArray(int arr[], const int SIZE)
{
	for (int i = 0; i < SIZE; i++)
	{
		arr[i] = rand() % 1000;
	}
}

void PrintArra(int arr[], const int SIZE)
{
	cout << "������:" << endl;
	for (int i = 0; i < SIZE; i++)
	{
		cout << arr[i] << "\t ";
	}
	cout << endl;
}

void main()
{
	setlocale(LC_ALL, "ru");
	srand(time(NULL));

	const int SIZE = 123;
	int arr[SIZE];
	int count = 0;

	FillArray(arr, SIZE);
	PrintArra(arr, SIZE);

	for (int i = 0; i < SIZE; i++)
	{
		if(arr[i] >= 10 && arr[i] <= 99)
		{
			count++;
		}
	}
	cout << "���������� ��������� � �������, ������� ����� � ������� [10,99]: = " << count << endl;
}
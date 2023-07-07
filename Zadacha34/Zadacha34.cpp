/*
������ 34: 
������� ������ ����������� ���������� �������������� ����������� �������. 
�������� ���������, ������� ������� ���������� ������ ����� � �������.
* ������������� ������ ������� ��������
* ������������ ������ ������� ��������
* �������� �������� ������ ������ �������� � �������
*/

#include<iostream>
#include <cstdlib>
#include<ctime>
using namespace std;

void FillArray(int arr[], const int SIZE)
{
	for (int i = 0; i < SIZE; i++)
	{
		arr[i] = rand() % 900 + 100;
	}
}

void PrintArra(int arr[], const int SIZE)
{
	cout << "������:   ";
	for (int i = 0; i < SIZE; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}

int countEven(int arr[], int SIZE) 
{
	int count = 0;

	for (int i = 0; i < SIZE; i++) 
	{
		if (arr[i] % 2 == 0) 
		{
			count++;
		}
	}

	return count;
}

void bubbleSort(int arr[], int size) 
{
	// ���������� ������� ������� ��������
	for (int i = 0; i < size - 1; i++) 
	{
		for (int j = 0; j < size - i - 1; j++) 
		{
			if (arr[j] > arr[j + 1]) 
			{
				swap(arr[j], arr[j + 1]);
			}
		}
	}
}

void countingSort(int arr[], int size) 
{
	// ���������� ������� ������� ��������
	const int MAX_VALUE = 999;
	int count[MAX_VALUE + 1] = { 0 };

	for (int i = 0; i < size; i++) 
	{
		count[arr[i]]++;
	}

	int index = 0;
	for (int i = 0; i <= MAX_VALUE; i++) 
	{
		for (int j = 0; j < count[i]; j++) 
		{
			arr[index++] = i;
		}
	}
}

void main()
{
	setlocale(LC_ALL, "ru");
	srand(time(NULL));

	const int SIZE = 10;
	int arr[SIZE];

	FillArray(arr, SIZE);
	cout << "�������� ������:" << endl;
	PrintArra(arr, SIZE);

	int count = countEven(arr, SIZE);
	cout << "���������� ������ �����: " << count << endl;

	cout << "���������� ������� ��������:" << endl;
	bubbleSort(arr, SIZE);
	PrintArra(arr, SIZE);

	cout << "���������� ������� ��������:" << endl;
	countEven(arr, SIZE);
	PrintArra(arr, SIZE);

}// ��������� ������� ����� ���������� ����������� � ��������.
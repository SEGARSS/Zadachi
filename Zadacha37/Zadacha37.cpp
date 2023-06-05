/*
������ �37
������� ������������ ��� ����� � ���������� �������. 
����� ������� ������ � ��������� �������, ������ � ������������� � �.�. 
��������� �������� � ����� �������.
*/

#include<iostream>
#include<string>
#include<ctime>
using namespace std;

void FillArray(int* const arr, const int SIZE) // ������� ������.
{
	for (int i = 0; i < SIZE; i++)
	{
		arr[i] = rand() % 10;
	}
}

void ShowArray(const int* const arr, const int SIZE) // ������� ������
{
	for (int i = 0; i < SIZE; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}

void Mul(int arr[], const int SIZE, int result[])
{
	for (int i = 0; i < SIZE / 2; i++) /*����� �� ��������� ������� i < SIZE / 2, ��� �� � ������ ��� ������
		�� �������� ������ � �������������� � �����. ����� �� �������� ������ i < SIZE ��� / 2, �� �� ��
		�������� ������� ������, � ������ ��� ��� 
		(����� ������� ������ � ��������� �������, ������ � ������������� � �.�.)
		�� �� �� ������ ������� ������ ������� � ��������� ���� �� ��� �� ����� � �������.*/
	{
		result[i] = arr[i] * arr[SIZE - 1 - i]; /*������ ������� �� ���������, ��� ���� ������ � ������� ������
		������� ( � ������) � �������� � �� 4 ������� �������(5���), ������ � ����� (arr[SIZE - 1 - i])
		� ���������� ������ ����������.*/
	}
	if (SIZE % 2 != 0)
	{
		result[SIZE / 2] = arr[SIZE / 2];
	}
}



void main()
{
	setlocale(LC_ALL, "ru");
	srand(time(NULL));

	int SIZE = 5;
	int* arr = new int[SIZE];
	FillArray(arr, SIZE);
	ShowArray(arr, SIZE); // ��� ��������� �������

	int* result = new int[SIZE / 2 + SIZE % 2];
	Mul(arr, SIZE, result);

	cout << "������������ ��� �����" << endl;
	ShowArray(result, SIZE / 2 + SIZE % 2);

	delete[] arr;
	delete[] result;
	
}
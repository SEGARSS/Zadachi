/*
Задача №31
Задайте массив из 12 элементов, 
заполненный случайными числами из промежутка [-9, 9]. 
Найдите сумму отрицательных и положительных элементов массива.
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
	for (int i = 0; i < SIZE; i++)
	{
		cout << arr[i] << " " << endl;
	}
}

void main()
{
	setlocale(LC_ALL,"ru");
	srand(time(NULL));
	const int SIZE = 12;
	int arr[SIZE];
	FillArray(arr, SIZE);
	PrintArra(arr, SIZE);
	int sum_positive = 0;
	int sum_negative = 0;
	for (int i = 0; i < SIZE; i++)
	{
		if (arr[i] > 0)
		{
			sum_positive += arr[i];
		}
		else if (arr[i] < 0)
		{
			sum_negative += arr[i];
		}
	}
	cout << "Сумма положительных элементов: = " << sum_positive << endl;
	cout << "Сумма отрицательных элементов: = " << sum_negative << endl;
}
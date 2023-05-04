/*
Задача 34: 
Задайте массив заполненный случайными положительными трёхзначными числами. 
Напишите программу, которая покажет количество чётных чисел в массиве.
* Отсортировать массив методом пузырька
* Отсортируйте массив методом подсчета
* Сравнить скорость работы метода пузырька и вставки
*/

#include<iostream>
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
	cout << "Массив:   ";
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

void main()
{
	setlocale(LC_ALL, "ru");
	srand(time(NULL));

	const int SIZE = 10;
	int arr[SIZE];
	FillArray(arr, SIZE);
	PrintArra(arr, SIZE);
	countEven(arr, SIZE);
	PrintArra(arr, SIZE);

}
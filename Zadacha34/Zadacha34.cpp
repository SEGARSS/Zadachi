/*
Задача 34: 
Задайте массив заполненный случайными положительными трёхзначными числами. 
Напишите программу, которая покажет количество чётных чисел в массиве.
* Отсортировать массив методом пузырька
* Отсортируйте массив методом подсчета
* Сравнить скорость работы метода пузырька и вставки
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

void bubbleSort(int arr[], int size) 
{
	// сортировка массива методом пузырька
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
	// сортировка массива методом подсчёта
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
	cout << "Исходный массив:" << endl;
	PrintArra(arr, SIZE);

	int count = countEven(arr, SIZE);
	cout << "Количество чётных чисел: " << count << endl;

	cout << "Сортировка методом пузырька:" << endl;
	bubbleSort(arr, SIZE);
	PrintArra(arr, SIZE);

	cout << "Сортировка методом подсчёта:" << endl;
	countEven(arr, SIZE);
	PrintArra(arr, SIZE);

}// Подробней разбери метод сортировки пузырьковый и подсчёта.
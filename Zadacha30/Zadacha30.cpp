/*
Задача №30
Напишите программу, 
которая выводит массив из 8 элементов, 
заполненный нулями и единицами в случайном порядке.
*/

#include<iostream>
#include<ctime>

using namespace std;

void FillArray(int arr[], const int SIZE)
{
	for (int i = 0; i < SIZE; i++)
	{
		arr[i] = rand() % 2;
	}
}

void PrintArra(int arr[], const int SIZE)
{
	for (int i = 0; i < SIZE; i++)
	{
		cout << arr[i] << " ";
	}
}


void main()
{
	setlocale(LC_ALL, "ru");
	srand(time(NULL));
	const int SIZE = 8;
	int arr[SIZE];
	FillArray(arr, SIZE);
	PrintArra(arr, SIZE);
}
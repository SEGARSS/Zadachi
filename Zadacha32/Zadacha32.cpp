/*
Задача 32.
Напишите программу замена элементов массива: 
положительные элементы замените на соответствующие отрицательные, 
и наоборот.
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
	cout << "Изначальный массив:      ";
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
	cout << "Модифицированный массив: ";
	for (int i = 0; i < SIZE; i++) 
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}
/*При решении, мы всего лишь в цикле фор указываем, что если arr[i] элемент массива больше 0, а значит
положительный, то присвоем ему - arr[i];(отрицательное значение.
А если arr[i] < 0 что значит что элемент с отрицательными данными, то также присвоем - arr[i], что даёт
мина на минус +, и помняем на значение положительное.*/


/*
Задача 36: 
Задайте одномерный массив, 
заполненный случайными числами. 
Найдите сумму элементов, стоящих на нечётных позициях.
* Найдите все пары в массиве и выведите пользователю
*/

#include<iostream>
#include<ctime>
using namespace std;

void FillArray(int arr[], const int SIZE)
{
	for (int i = 0; i < SIZE; i++)
	{
		arr[i] = rand() % 100;
	}
}

void PrintArray(int arr[], const int SIZE)
{
	cout << "Массив:" << endl;
	for (int i = 0; i < SIZE; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}

int sum(int arr[], const int SIZE)
{
	int sum = 0;
	for (int i = 1; i < SIZE; i += 2)
	{
		sum += arr[i];
	}
	return sum;
}

void FindPairs(int arr[], const int SIZE)
{
	cout << "Пара элементов: " << endl;
	for (int i = 0; i < SIZE; i++)
	{
		for (int j = i + 1; j < SIZE; j++)
		{
			if (arr[i] == arr[j])
			{
				cout << arr[i] << " и " << arr[j] << endl;
			}
		}
	}
}

void main()
{
	setlocale(LC_ALL, "ru");
	srand(time(NULL));

	const int SIZE = 20;
	int arr[SIZE];
	
	FillArray(arr, SIZE);
	PrintArray(arr, SIZE);
	int result = sum(arr, SIZE);
	cout << "Сумма элементов, стоящих на чётных позициях: " << result << endl;
	FindPairs(arr, SIZE);
}

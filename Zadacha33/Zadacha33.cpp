/*
Задача 33.
Задайте массив. 
Напишите программу, 
которая определяет, 
присутствует ли заданное число в массиве.
*/

#include<iostream>
#include<ctime>
using namespace std;

void FillArray(int arr[], const int SIZE)
{
	for (int i = 0; i < SIZE; i++)
	{
		arr[i] = rand() % 10;
	}
}

void PrintArra(int arr[], const int SIZE)
{
	cout << "Массив:      ";
	for (int i = 0; i < SIZE; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}

void main()
{
	setlocale(LC_ALL, "ru");

	const int SIZE = 10;
	int arr[SIZE];
	FillArray(arr, SIZE);
	PrintArra(arr, SIZE);
	int che;
	cout << "Введите число: ";
	cin >> che;
	bool found = false;/*Тут добавили условие, что если будет какоето число, которого нет в массиве после проверки
	он попадет в переменную found и становиться false не правдой.*/
	for (int i = 0; i < SIZE; i++)
	{
		if (arr[i] == che)
		{
			found = true;
			break;
		}
	}
	if (found)
	{
		cout << "Такое число присутствует в массиве:";
	}
	else
	{
		cout << "Такого числа нет в массиве:";
	}
}



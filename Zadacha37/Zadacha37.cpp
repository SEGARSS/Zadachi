/*
Задача №37
Найдите произведение пар чисел в одномерном массиве. 
Парой считаем первый и последний элемент, второй и предпоследний и т.д. 
Результат запишите в новом массиве.
*/

#include<iostream>
#include<string>
#include<ctime>
using namespace std;

void FillArray(int* const arr, const int SIZE) // Полняем массив.
{
	for (int i = 0; i < SIZE; i++)
	{
		arr[i] = rand() % 10;
	}
}

void ShowArray(const int* const arr, const int SIZE) // Выводим массив
{
	for (int i = 0; i < SIZE; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}

void Mul(int arr[], const int SIZE, int result[])
{
	for (int i = 0; i < SIZE / 2; i++) /*Сдесь мы указываем записью i < SIZE / 2, что мы с начала идём только
		до половины масива и соответсвтенно с конца. Еслиб мы написали просто i < SIZE без / 2, то мы бы
		нарушили условия задачи, а именно вот это 
		(Парой считаем первый и последний элемент, второй и предпоследний и т.д.)
		Мы бы не смогли указать первый элемент и последний если бь шли до конца в массиве.*/
	{
		result[i] = arr[i] * arr[SIZE - 1 - i]; /*Данной записью мы указываем, что берём данные с нулевой ячейки
		массива ( с первой) и умножаем её на 4 элемент массива(5йты), тобижь с конца (arr[SIZE - 1 - i])
		и полученные данные записываем.*/
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
	ShowArray(arr, SIZE); // Вид исходного массива

	int* result = new int[SIZE / 2 + SIZE % 2];
	Mul(arr, SIZE, result);

	cout << "Произведение пар чисел" << endl;
	ShowArray(result, SIZE / 2 + SIZE % 2);

	delete[] arr;
	delete[] result;
	
}
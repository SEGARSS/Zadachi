// Задача №45
// Напишите программу, которая будет создавать копию заданного одномерного массива с помощью поэлементного копирования

#include<iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL,"ru");

	int orArr[] = {1,2,3,4,5};

	int length = sizeof(orArr) / sizeof(orArr[0]);

	int *copArr = new int[length];

	for (int i = 0; i < length; i++)
	{
		copArr[i] = orArr[i];
	}

	cout << "Исходный массив: ";
	for (int i = 0; i < length; i++)
	{
		cout << orArr[i] << " ";
	}

	cout << "Скопированный массив: ";
	for (int i = 0; i < length; i++)
	{
		cout << copArr[i] << " ";
	}

	delete[] copArr;

	return 0;
}
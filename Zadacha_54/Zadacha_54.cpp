// Задайте двумерный массив. 
// Напишите программу, которая упорядочит по убыванию элементы каждой строки двумерного массива.

#include<iostream>
#include<algorithm>

using namespace std;


int main()
{
	setlocale(LC_ALL, "ru");

	int arr[4][4] =
	{
		{5,4,7,8},
		{34,85,10,78},
		{36,84,23,4},
		{15,34,34,8}
	};

	cout << "Изначальный массив:" << endl;

	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
			cout << arr[i][j] << " ";
		cout << endl;
	}

	for (int i = 0; i < 4; i++)
	{
		sort(arr[i], arr[i] + 4, greater<int>());
	}

	cout << "Отсортированный массив по убыванию:" << endl;

	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
			cout << arr[i][j] << " ";
		cout << endl;
	}

	return 0;
}
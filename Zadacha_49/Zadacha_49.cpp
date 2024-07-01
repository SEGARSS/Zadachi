// Задача №49
// Здайте двухмерный массив. Найдите элементы, у которых оба индекса чётные, и замените эти элементы на их квадраты.

#include<iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL,"ru");

	const int ROWS = 5;
	const int COLS = 5;

	int arr[ROWS][COLS] 
	{
		{13,6,3,94,50},
		{35,32,68,5,9},
		{97,31,68,77,82},
		{25,4,37,8,1},
		{0,32,32,5,58}
	};

	cout << "Массив:" << endl;
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			cout << arr[i][j] << "\t";
		}
		cout << endl;
	}

	// Замена элементов с четными индексами на их квадраты
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			if (i % 2 == 0 && j % 2 == 0)
			{
				arr[i][j] = arr[i][j] * arr[i][j]; // Замена на квадрат элемента
			}
		}
	}

	cout << "\nМассив после замены:" << endl;
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			cout << arr[i][j] << "\t";
		}
		cout << endl;
	}

	return 0;
}
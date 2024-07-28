/*Задайте двумерный массив. Найдите сумму элементов, находящихся на главной диагонали (с индексами (0,0); (1;1) и т.д.*/

#include<iostream>

using namespace std;


int main()
{
	setlocale(LC_ALL, "ru");

	const int ROWS = 3;
	const int COLS = 3;

	int arr[ROWS][COLS] =
	{
		{ 3,5,4 },
		{ 8,6,2 },
		{ 9,5,7 }
	};

	//Выводим массив на экран.
	cout << "Массив:" << endl;
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}

	int sum = 0; // Переменная для хранения суммы элементов на главной диагонали

	int n = 3; // Размер массива

	// Вычисление суммы элементов на главной диагонали
	for (int i = 0; i < n; ++i)
		sum += arr[i][i];

	
	// Вывод результата
	cout << "Сумма элементов на главной диагонали: " << sum << endl;


	return 0;
}
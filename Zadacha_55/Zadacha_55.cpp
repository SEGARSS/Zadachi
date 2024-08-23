// Задайте двумерный массив. Напишите программу, которая заменяет строки на столбцы. 
// В случае, если это невозможно, программа должна вывести сообщение для пользователя.

#include<iostream>

using namespace std;


int main()
{
	setlocale(LC_ALL, "ru");

	int arr[4][4] =
	{
		{32,4,56,74},
		{78,85,65,21},
		{3,25,79,96},
		{3,34,14,5}
	};

	cout << "Изначальный массив:" << endl;

	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
			cout << arr[i][j] << " ";
		cout << endl;
	}

	const int rows = 4;
	const int cols = 4;

	if (rows != cols)
		cout << "Замена строк на столбцы невозможна, так как массив не квадратный." << endl;
	else
	{
		int transposed[rows][cols]; // Новый массив для транспонирования

		for (int i = 0; i < rows; i++)
		{
			for (int j = 0; j < cols; j++)
				transposed[j][i] = arr[i][j];
		}

		cout << "Массив где строки заменили на столбы:" << endl;

		for (int i = 0; i < rows; i++)
		{
			for (int j = 0; j < cols; j++)
				cout << transposed[i][j] << " ";
			cout << endl;
		}
	}	

	return 0;
}
/* Напишите программу, которая на вход принимает позиции элемента в двумерном массиве,
   и возвращает значение этого элемента или же указание, что такого элемента нет. */

#include<iostream>
#include<vector>

using namespace std;


int main()
{
	setlocale(LC_ALL, "RU");

	int rows, cols;

	cout << "Введите количество столбов в массиве: ";
	cin >> rows;

	cout << "Введите количество строк в массиве: ";
	cin >> cols;

	//Создаём двухмерный массив
	vector<vector<int>> matrix(rows, vector<int>(cols));

	//Ввод элементов массива
	cout << "Введите элементы массива:\n" << endl;
	for (int i = 0; i < rows; i++)
		for (int j = 0; j < cols; j++)
			cin >> matrix[i][j];

	cout << "Полученный массив:" << endl;
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			cout << matrix[i][j] << " ";
		}
		cout << endl;
	}

	int row_pos, col_pos;

	// Ввод позиции элемента
	cout << "Введите номер строки и столбца элемента, который вы хотите получить (начиная с 0): ";
	cin >> row_pos >> col_pos;

	if (row_pos >= 0 && row_pos < rows && col_pos >= 0 && col_pos < cols)
		cout << "Значение элемента: " << matrix[row_pos][col_pos] << endl;
	else
		cout << "Элемента с такой позицией нет в массиве." << endl;

	return 0;
}
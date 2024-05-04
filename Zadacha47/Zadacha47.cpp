// Задача 47. Заполненный двухмерный массив заполненный случайными вещественными числами.

#include<iostream>
#include<ctime>
using namespace std;

int main()
{
	setlocale(LC_ALL,"ru");
	srand(time(NULL));

	int rows;
	int cols;

	cout << "Введите сколько будет столбов в массиве: ";
	cin >> rows;

	cout << "Введите сколько будет строк в массиве: ";
	cin >> cols;

	double **arr = new double *[rows];

	for (int i = 0; i < rows; i++)
	{
		arr[i] = new double[cols];

		for (int j = 0; j < cols; j++)
		{
			arr[i][j] = static_cast<double>(rand()) / RAND_MAX * 100; 
		}
	}

	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}

	return 0;
}
// Задача №46
// Задайте двухмерный масив размер m*n заполненный случайными числами.

#include<iostream>
#include<ctime>
using namespace std;

int main()
{
	setlocale(LC_ALL,"ru");
	srand(time(NULL));

	int rows;
	int cols;

	cout << "Введите количество строк rows: ";
	cin >> rows;
	cout << "Введите количество столбцов cols: ";
	cin >> cols;

	/*достаточно один раз уазать массиву (**), потом последующие указание не требуеться. */
	int **arr = new int *[rows]; // Строки

	for (int i = 0; i < rows; i++)
	{
		arr[i] = new int[cols]; // Столбцы

		for (int j = 0; j < cols; j++)
		{
			arr[i][j] = rand() % 10;
		}
	}

	cout << "Двумерный массив размером " << rows << "x" << cols << " заполненный случайными числами:\n";

	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}

	/*В данном случаи нет нужды указыват ьудаление arr[j], он и так был частью двух мерного массива.
	После того как все строки были удалены, мы освобождаем память для массива указателей на строки с помощью delete[] arr;.*/
	for (int i = 0; i < rows; i++) 
	{
		delete[] arr[i];
	}
	delete[] arr;

	return 0;
}
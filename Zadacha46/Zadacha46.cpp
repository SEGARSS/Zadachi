// Задача №46
// Задайте двухмерный масив размер m*n заполненный случайными числами.

#include<iostream>
#include<ctime>
using namespace std;

int main()
{
	setlocale(LC_ALL,"ru");
	srand(time(NULL));

	int ROWS;
	int COLS;

	cout << "Введите количество строк ROWS: ";
	cin >> ROWS;
	cout << "Введите количество столбцов COLS: ";
	cin >> COLS;

	/*достаточно один раз уазать массиву (**), потом последующие указание не требуеться. */
	int **arr = new int *[ROWS]; // Строки

	for (int i = 0; i < ROWS; i++)
	{
		arr[i] = new int[COLS]; // Столбцы

		for (int j = 0; j < COLS; j++)
		{
			arr[i][j] = rand() % 10;
		}
	}

	cout << "Двумерный массив размером " << ROWS << "x" << COLS << " заполненный случайными числами:\n";

	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}

	/*В данном случаи нет нужды указыват ьудаление arr[j], он и так был частью двух мерного массива.
	После того как все строки были удалены, мы освобождаем память для массива указателей на строки с помощью delete[] arr;.*/
	for (int i = 0; i < ROWS; i++) 
	{
		delete[] arr[i];
	}
	delete[] arr;

	return 0;
}
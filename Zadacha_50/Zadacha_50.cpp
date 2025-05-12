#include<iostream>
using namespace std;

/*Задача 50. 
Напишите программу, 
которая на вход принимает позиции элемента в двумерном массиве, 
и возвращает значение этого элемента или же указание, 
что такого элемента нет.
*/

int main()
{
	setlocale(LC_ALL, "ru");

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

	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}

	return 0;
}
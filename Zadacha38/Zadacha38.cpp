/*Задача 38: 
Задайте массив вещественных чисел. 
Найдите разницу между максимальным и минимальным элементов массива.*/

#include<iostream>
#include<ctime>
using namespace std;

void FillArray(double arr[], int size) // заполняем массив случайными числами
{
	for (int i = 0; i < size; i++)
	{
		arr[i] = static_cast<double>(rand()) / RAND_MAX;
	}
}

void PrintArray(double arr[], int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}

double Find(double arr[], int size)
{
	if (size == 0)
	{
		return 0.0;
	}

	double minElement = arr[0];
	double maxElement = arr[0];

	for (int i = 0; i < size; i++)
	{
		if (arr[i] < minElement)
		{
			minElement = arr[i];
		}
		if (arr[i] > maxElement)
		{
			maxElement = arr[i];
		}
	}

	return minElement - maxElement;

}

int main()
{
	setlocale(LC_ALL, "ru");
	srand(time(NULL));

	const int size = 10;
	double arr[size];

	FillArray(arr, size);
	PrintArray(arr, size);

	double diff = Find(arr, size);
	cout << "Разница между максимльными и минимальными элементами: " << diff << endl;

	return 0;

}
/*Задача №39
Напишите программу, которая перевернёт одномерный массив 
(последний элемент будет на первом месте, а первый - на последнем и т.д.)*/

#include<iostream>
using namespace std;

void ReverseArray(int arr[], int size)
{
	for (int i = 0; i < size/2; i++)
	{
		int temp = arr[i];
		arr[i] = arr[size - 1 - i];
		arr[size - 1 - i] = temp;
	}
}

void PrintArray(int arr[], int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}

int main()
{
	setlocale(LC_ALL, "ru");

	const int size = 5;
	int arr[]{ 1,2,3,4,5};
			
	PrintArray(arr, size);
	
	ReverseArray(arr, size);

	PrintArray(arr, size);

	return 0;
}

/*Повторить и проделать ещё раз.*/
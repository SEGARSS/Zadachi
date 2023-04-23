/*
Задача №28
Напишите программу, 
которая принимает на вход число N и выдаёт 
произведение чисел от 1 до N.
*/

#include<iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "RU");

	int n;
	cout << "Введите число: ";
	cin >> n;
	int result = 1;

	for (int i = 1; i <= n; i++) 
	{
		result *= i;
	}

	cout << "Произведение чисел от 1 до N равно " << result << endl;
		
}
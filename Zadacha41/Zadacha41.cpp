﻿//﻿ Задача 41: 
// Пользователь вводит число нажатий, затем программа следит за нажатиями и выдает сколько чисел больше 0 было введено.

#include<iostream>
#include<string>
using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");

	int n; //Сколько раз нужно будет ввести числа(к примеру 10) тогда 10 раз запросит разные числа.
	cout << "Введите количество нажатий: ";
	cin >> n;

	int schetchic = 0; // Счётчик которое посчитает все числа больше 0.

	for (int i = 0; i < n; i++) /*В цикле будкт рабоать запрос на ввод чисел, и сразу их ложить в счётчик и посчитает количесво
		нажатий и сколько чисел больше 0.*/
	{
		int number;
		cout << "Введите число: ";
		cin >> number;

		if (number > 0)
		{
			schetchic++;
		}
	}

	cout << "Количество чисел больше 0: " << schetchic << endl;

	return 0;
}
/*Простая реализация задачи но очень наглядная, понятная и удобная.*/

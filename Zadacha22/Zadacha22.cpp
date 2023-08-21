/*
Задача №22
Напишите программу, которая принимает на вход число (N) 
и выдаёт таблицу квадратов чисел от 1 до N.
выводятся в строку числа, а под ними - квадраты*/

#include <iostream>
using namespace std;

int umg(int a, int b) //Создали функцию умножения для возведения чисел в квадрат.
{
	int result;
	result = a * b; 
	return result;
}

void main()
{
    setlocale(LC_ALL, "ru");
    int n;
    cout << "Введите число: - ";
    cin >> n;
	
	for (int i = 1; i <= n; i++) // Выводит в терминал все числа от 1 до N. Поэтому int i = 1; по условию задачи.
	{
		cout << i << " ";
	}
	cout << endl;
	for (int i = 1; i <= n; i++)//Возводит в квадрат все числа от 1 до N и показывает в терминале.
	{
		cout << umg(i, i) << " ";
	}
	cout << endl;

}


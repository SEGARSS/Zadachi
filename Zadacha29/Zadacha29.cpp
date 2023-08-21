﻿/*
Задача 28.
Написать программу
которая из имен через запятую выберет случайное имя
и выведет в терминал Игорь, Антон, Сергей -> Антон 
*/

#include<iostream>
#include<vector> // Позволяет удалять, изменять элементы массива.
#include<string> // Преобразование переменной в строку.
#include<ctime> // подключаем библиотеку для работы со временем.
using namespace std;

void main()
{
	setlocale(LC_ALL, "Ru");
	srand(time(0));// инициализируем генератор случайных чисел текущим временем
	vector<string> names = { "Игорь","Антон","Сергей" };
	int random_index = rand() % names.size(); // выбираем случайный индекс в диапазоне[0, размер списка)
	string random_name = names[random_index]; // выбираем имя по случайному индексу
	cout << random_name;
}
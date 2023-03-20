/*
Задача №11
Напишите программу, 
которая выводит случайное трёхзначное число 
и удаляет вторую цифру этого числа.
*/

#include<iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "ru");
	srand(time(NULL));
	int num = rand()% 991 +10;
	cout << "Сгенерированное число - " <<  num << endl;

	// Доделай




}
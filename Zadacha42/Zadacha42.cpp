//Задача №42
// Напишите программу, которая будет преобразовывать десятичное число в двоичное.

#include<iostream>
#include<string>
#include<bitset>
using namespace std;

int main ()
{
	setlocale(LC_ALL,"Ru");

	int desyatichnot;
	cout << "Введите десятичное число - ";
	cin >> desyatichnot;

	bitset<32> binaryNumber(desyatichnot);
	cout << "Двоичное предствление - " << binaryNumber << endl;

	return 0;
}

/*Задачка чисто математиматическая. Библиотека  #include<bitset> преобразует функцию десятичных чисел 
в двоичные.*/



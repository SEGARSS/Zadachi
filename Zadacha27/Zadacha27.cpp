﻿/*
Задача 27: 
Напишите программу, 
которая принимает на вход число и выдаёт сумму цифр в числе.
*/

#include <iostream>
using namespace std;

void main()
{
    setlocale(LC_ALL, "RU");
    int n;
    cout << "Введите число: ";
    cin >> n;

    int sum = 0;
    while (n > 0) 
    {
        sum += n % 10;
        n /= 10;
    }

    cout << "Сумма цифр числа: " << sum << endl;
}


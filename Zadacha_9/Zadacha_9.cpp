/*
Задача 9:
вывести случ число из 10-100 
и показать его наиб цифру
*/

#include<iostream>
using namespace std;

void main()
{
    setlocale(LC_ALL, "Ru");
    // инициализация генератора случайных чисел
    int num = rand() % 91 + 10; // генерация числа от 10 до 100
    cout << "Сгенерированное число: " << num << endl;
    int max_digit = 0;
    if (num > max_digit)
    {
        cout << "Максимальное - " << num;
    }
}
/*
Задача №1
Напишите программу, 
которая на вход принимает два числа и проверяет,
является ли первое число квадратом второго.
*/

#include <iostream>
using namespace std;


void main()
{
    setlocale(LC_ALL, "ru");
    int num1, num2;
    cout << "Введите два числа:" << endl;
    cout << "Введите первое число - ";
    cin >> num1;
    cout << "Введите второе число - ";
    cin >> num2;
    if (num1 * num1 == num2)
    {
        cout << "Да, являеться квадратом!" << endl;
    }
    else
    {
        cout << "Нет, не являеться квадратом!" << endl;
    }
}
  
  
    


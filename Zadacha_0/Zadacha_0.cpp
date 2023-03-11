/*
Задача №0
Напишите программу, которая на вход принимает число и
выдаёт его квадрас (число умноженное на само себя)
*/

#include <iostream>
using namespace std;


void main() 
{
    setlocale(LC_ALL, "ru");
    int num;
    cout << "Введите число: ";
    cin >> num;
    cout << "Квадрат числа " << num << " равен " << num * num << endl;
    return;
}
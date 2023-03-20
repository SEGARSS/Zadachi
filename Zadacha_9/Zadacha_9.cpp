/*
Задача 9:
вывести случ число из 10-100 
и показать его наиб цифру
*/

#include<iostream>
using namespace std;

void main()
{
    setlocale(LC_ALL, "ru");
    srand(time(NULL)); // инициализация генератора случайных чисел, если убрать, будет одно и тоже число.
    int num = rand() % 91 + 10; // генерация числа от 10 до 100
    cout << "Сгенерированное число: " << num << endl;
    int max_digit = 0;
    while (num > 0) { // перебор цифр числа
        int digit = num % 10;
        if (digit > max_digit) // если цифра больше текущей максимальной
        { 
            max_digit = digit; // обновляем максимальную цифру
        }
        num /= 10; // переходим к следующей цифре
    }
    cout << "Наибольшая цифра: " << max_digit << endl;
    return ;
}
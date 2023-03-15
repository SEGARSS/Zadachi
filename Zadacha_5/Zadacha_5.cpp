/*
Задача №5
Напишите программу, 
которая будет выдавать название дня недели по заданному номеру.
*/

#include <iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "ru");
    
    int day;
    cout << "Введите номер недели - ";
    cin >> day;

    switch (day) 
    {
    case 1:
        cout << day << " - Это Понедельник";
    case 2:
        cout << day << " - Это Вторник";
        break;
    case 3:
        cout << day << " - Это Среда";
        break;
    case 4:
        cout << day << " - Это Четверг";
        break;
    case 5:
        cout << day << " - Это Пятница";
        break;
    case 6:
        cout << day << " - Это Суббота";
        break;
    case 7:
        cout << day << " - Это Воскресенье";
        break;
    default:
        cout << "Ошибка: неверный номер дня недели"; 
    }
}
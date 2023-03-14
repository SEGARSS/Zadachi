/*
Задача №3
Напишите программу, которая на вход принимает одно число (N),
а на выходе показывает все целые числа в промежутке от -N до N.
*/

#include<iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "ru");
    int n;
    cout << "Введите число N: ";
    cin >> n;
    for (int i = -n; i <= n; i++) 
    {
        cout << i << " ";
    }
    return;

}
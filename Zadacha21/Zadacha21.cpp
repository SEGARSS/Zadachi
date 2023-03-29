/*Задача 21
Напишите программу, 
которая принимает на вход координаты двух точек 
и находит расстояние между ними в 3D пространстве.
*/

#include <iostream>
using namespace std;


void main()
{
    setlocale(LC_ALL, "ru");
    double x1, y1, z1, x2, y2, z2;
    cout << "Введите кординату x1: - ", cin >> x1;
    cout << "Введите кординату y1: - ", cin >> y1;
    cout << "Введите кординату z1: - ", cin >> z1;
    cout << "Введите кординату x2: - ", cin >> x2;
    cout << "Введите кординату y2: - ", cin >> y2;
    cout << "Введите кординату z1: - ", cin >> z2;
    double rast;
    rast = sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2) + pow((z2 - z1), 2));
    cout << "Расстояние между точками: " << rast << endl;
}
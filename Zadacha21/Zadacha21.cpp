/*������ 21
�������� ���������, 
������� ��������� �� ���� ���������� ���� ����� 
� ������� ���������� ����� ���� � 3D ������������.
*/

#include <iostream>
using namespace std;


void main()
{
    setlocale(LC_ALL, "ru");
    double x1, y1, z1, x2, y2, z2;
    cout << "������� ��������� x1: - ", cin >> x1;
    cout << "������� ��������� y1: - ", cin >> y1;
    cout << "������� ��������� z1: - ", cin >> z1;
    cout << "������� ��������� x2: - ", cin >> x2;
    cout << "������� ��������� y2: - ", cin >> y2;
    cout << "������� ��������� z1: - ", cin >> z2;
    double rast;
    rast = sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2) + pow((z2 - z1), 2));
    cout << "���������� ����� �������: " << rast << endl;
}
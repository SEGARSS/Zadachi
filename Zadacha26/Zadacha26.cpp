/*
������ �26
�������� ���������, 
������� ��������� �� ���� ����� � ����� ���������� ���� � �����.
*/

#include <iostream>
using namespace std;
/*������ � ������ while*/
int main() 
{
    setlocale(LC_ALL, "RU");

    int a;
    int b = 0;

    cout << "������� �����: ";
    cin >> a;

    while (a != 0) /*��������� ������� ��� ����� �� ������ ���� 0, ����� � ����� ����� ������� 0, �� ���������
        ����.*/
    {
        a /= 10; // ����� ����� �� 10, ���� � ����� �� ������ ���� �������� ����� 0.
        b++;//����� �������, ������� ��� �� �������� ����� �� 10, ����� �������� 0.
    }

    cout << "���������� ���� � �����: ����� " << b;

    return 0;
}

/*������ � ������ for*/
void main()
{
    setlocale(LC_ALL, "RU");

    int a;
    int b = 0;

    cout << "������� �����: ";
    cin >> a;
    /*�� ������� ����� for. �� i ����� ����������� �������� �����. ����� �� ������� ��������� ����� ������,
    � ������ ����� ���� ����� ���������� ���� ������ 0 - i > 0, ������� �����������. � ���� ���� ����� ����� 0,
    �� ������� �� ����� ��� ������ �� 10 - i /= 10 - � � ����� ������� 0. � ������� b++ ������������, ������� 
    ��� �� �� ���� ������� ��� ��������. ���� � ������� ������ ����� 321, �� �� ��� ������� �� 10 ��� ����
    (� ��� ����� b)
    � ������� � ����� �����, ��� ���������� ��� � ����� 321 ����� 3.*/
    for (int i = a; i > 0; i /= 10) 
    {
        b++;
    }

    cout << "���������� ���� � ����� " << a << " ����� " << b << endl;
    
}
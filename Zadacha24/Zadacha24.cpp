/*
������ 24
�������� ���������, 
������� ��������� �� ���� ����� (�) 
� ����� ����� ����� �� 1 �� �.
*/

#include <iostream>
using namespace std;

void main() 
{
    setlocale(LC_ALL, "Ru");
    int a;
    int sum = 0; 

    cout << "������� ����� A: ";
    cin >> a;

    // ������� �����
    for (int i = 1; i <= a; i++) 
    {
        sum += i; //������ �����, �������� �������� ����� ����������.
    }

    // ������� ���������
    cout << "����� ����� �� 1 �� " << a << " ����� " << sum << endl;

}
/*���� ������, ��� ��� ����� �� ����� ����������. ������, ��� ������� 5 �� ��� ����� 
1+2+3+4+5 � ���� 15.*/
/*
������ 25: 
�������� ����, ������� ��������� �� ���� ��� ����� (A � B) 
� �������� ����� A � ����������� ������� B.
�������� ����������� � ���������� +, -, /, * � ���������� � �������.
*/

#include <iostream>
using namespace std;
/*������ �������, � ����� � ���� � 11 ���������, ��� ������ ������ 5� ����� � ������� switch � ��������
���������� � �������.*/
void main()
{
    setlocale(LC_ALL, "Ru");
    int a, b, result;
    
    cout << "������� ����� A: ";
    cin >> a;

    cout << "������� ����� B: ";
    cin >> b;

    cout << "�������� �������� � �������" << endl <<
        "1. ��������" << endl <<
        "2. ���������" << endl <<
        "3. ���������" << endl <<
        "4. �������" << endl <<
        "5. � �������" << endl;
    cin >> result;

    switch (result)
    {
    case 1:
        cout << "��� �������� ����� ����� = " << a + b;
        break;
    case 2:
        cout << "��� ��������� ����� ����� = " << a - b;
        break;
    case 3:
        cout << "��� ��������� ����� ����� = " << a * b;
        break;
    case 4:
        cout << "��� ������� ����� ����� = " << (double)a / b;
        break;
    case 5:
        result = a; // �� ������� �����, ����� ����� ���������.
        for (int i = 2; i <= b; i++) // �� �� ����� �����, ������ ����� � 2��� ������.
        {
            result *= a;
        }
        cout << a << " � ������� " << b << " ����� " << result << endl;
        break;
    default:
        cout << "����� ��� ����� ������� �����������!";
        break;
    }

}
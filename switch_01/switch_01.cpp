/*������������ ��� ������� ������� � ���� ���� ������� �� ������ �������,
� ����� (A,B,C,D,E). ���������� ������������� ���� ������������� � ���������, 
� ������� ���� (���������� �� �������������������).  
�� ���� ���� ������� ��� D, ��� d � ������ ��������� ���� � ��� �� case.*/


#include <iostream>
#include <cctype> // ��� ������� toupper
using namespace std;

int main()
{
    setlocale(LC_ALL, "rus");

    char a; // ����� ������� ����� ������������
    bool var = true; // ����������� ���������� ����� do while

    cout << "������� ����� �� �������, ��� ������� ������� � ���� (A,B,C,D,E): ";


    do {
        var = false; // ��� ������ �� �����, ���� �� ��������� default 
        // �.�. ���� �������� ���������� case
        cin >> a; // ���� ��������
        a = toupper(a);

        switch (a) // switch ��������� ������ answer � ���� ���������� case
        {
        case 'A':  // ���� answer �������� � ��� �
            cout << "������� ����� Trinitat Nova: ";
            cout << "����� � ���� - 15 ���." << endl;
            break;
        case 'B':
            cout << "������� ����� Casa de l�Aigua: ";
            cout << "����� � ���� - 19 ���." << endl;
            break;
        case 'C':
            cout << "������� ����� Torre Baro Vallbona: ";
            cout << "����� � ���� - 25 ���." << endl;
            break;
        case 'D':
            cout << "������� ����� Ciutat Meridiana: ";
            cout << "����� � ���� - 30 ���." << endl;
            break;
        case 'E':
            cout << "������� ����� Can Cuias: ";
            cout << "����� � ���� - 38 ���." << endl;
            break;
        default: // ���� �� ���� case �� ��������, ��������� default
            cout << a << " - ������������ ����! ";
            cout << "�������� ���������� ����� (A,B,C,D,E): ";
            var = true;  // ����� �������� true, ����� ���� �������� ������
        }
    } while (var);  // ���� �����������, ���� var ����� true
    // �� ����, ���� ������������ �� ������
    // ���������� �������� � �������������
    // ���� default �� ���������
    return 0;
}
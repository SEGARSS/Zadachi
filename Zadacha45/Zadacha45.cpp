// ������ �45
// �������� ���������, ������� ����� ��������� ����� ��������� ����������� ������� � ������� ������������� �����������

#include<iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL,"ru");

	int orArr[] = {1,2,3,4,5};

	int length = sizeof(orArr) / sizeof(orArr[0]);

	int *copArr = new int[length];

	for (int i = 0; i < length; i++)
	{
		copArr[i] = orArr[i];
	}

	cout << "�������� ������: ";
	for (int i = 0; i < length; i++)
	{
		cout << orArr[i] << " ";
	}

	cout << "������������� ������: ";
	for (int i = 0; i < length; i++)
	{
		cout << copArr[i] << " ";
	}

	delete[] copArr;

	return 0;
}
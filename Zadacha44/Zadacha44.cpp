// ������ �44
// �� ��������� ��������, �������� ������ N ����� ���������. ������ ��� ����� ���������: 0 � 1.

#include<iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL,"ru");

	int n;
	cout << "������� ���������� ����� ��������: ";
	cin >> n;

	int a = 0;
	int b = 1;
	int c;

	if (n >= 1)
	{
		cout << a << " ";
	}
	if (n >= 2)
	{
		cout << b << " ";
	}

	for (int i = 3; i <= n; i++)
	{
		c = a + b;
		cout << c << " ";
		a = b;
		b = c;
	}

	return 0;
}
// Задача №44
// Не используя рекурсию, выведите первые N чисел Фибоначчи. Первые два числа Фибоначчи: 0 и 1.

#include<iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL,"ru");

	int n;
	cout << "Введите количество чисел фебоначи: ";
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
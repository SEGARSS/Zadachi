// Задача №48.
// Задайте двумерный массив м на n, каждый элемент в массиве находиться по формуле: Amm = m+n. Выведите полученый массив на экран.

#include<iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL,"ru");

	int m;
	int n;

	cout << "Введите сколько будет строк в массиве: ";
	cin >> m;

	cout << "Введите сколько будет столбов в массиве: ";
	cin >> n;

	// Создание двухмерного массива
	int **arr = new int *[m];

	for (int i = 0; i < m; ++i) 
	{
        arr[i] = new int[n];
   }

	// Заполняем массив по формуле Amm = m+n.
	for (int i = 0; i < m; ++i) 
	{
        for (int j = 0; j < n; ++j) 
		  {
            arr[i][j] = i + j;
        }
    }

	// Вывод массива на экран
   cout << "Полученный массив:" << endl;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}

	// Освобождение памяти
	for (int i = 0; i < m; ++i) 
	{
		delete[] arr[i];
	}
	delete[] arr;

	return 0; //23
}
/* �������� ���������, ������� �� ���� ��������� ������� �������� � ��������� �������,
   � ���������� �������� ����� �������� ��� �� ��������, ��� ������ �������� ���. */

#include<iostream>
#include<vector>

using namespace std;

int main()
{
	setlocale(LC_ALL, "RU");

	int rows, cols;

	cout << "������� ���������� ������� � �������: ";
	cin >> rows;

	cout << "������� ���������� ����� � �������: ";
	cin >> cols;

	//������ ���������� ������
	vector<vector<int>> matrix(rows, vector<int>(cols));

	//���� ��������� �������
	cout << "������� �������� �������:\n" << endl;
	for (int i = 0; i < rows; i++)
		for (int j = 0; j < cols; j++)
			cin >> matrix[i][j];

	cout << "���������� ������:" << endl;
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			cout << matrix[i][j] << " ";
		}
		cout << endl;
	}

	int row_pos, col_pos;

	// ���� ������� ��������
	cout << "������� ����� ������ � ������� ��������, ������� �� ������ �������� (������� � 0): ";
	cin >> row_pos >> col_pos;

	if (row_pos >= 0 && row_pos < rows && col_pos >= 0 && col_pos < cols)
		cout << "�������� ��������: " << matrix[row_pos][col_pos] << endl;
	else
		cout << "�������� � ����� �������� ��� � �������." << endl;

	return 0;
}
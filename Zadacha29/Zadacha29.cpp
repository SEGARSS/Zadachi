/*
������ 28.
�������� ���������
������� �� ���� ����� ������� ������� ��������� ���
� ������� � �������� �����, �����, ������ -> ����� 
*/

#include<iostream>
#include<vector> // ��������� �������, �������� �������� �������.
#include<string> // �������������� ���������� � ������.
#include<ctime> // ���������� ���������� ��� ������ �� ��������.
using namespace std;

void main()
{
	setlocale(LC_ALL, "Ru");
	srand(time(0));// �������������� ��������� ��������� ����� ������� ��������
	vector<string> names = { "�����","�����","������" };
	int random_index = rand() % names.size(); // �������� ��������� ������ � ���������[0, ������ ������)
	string random_name = names[random_index]; // �������� ��� �� ���������� �������
	cout << random_name;
}
#include <iostream>
using namespace std;
#define tab "\t"
//#define zadacha1

void main()
{
	setlocale(LC_ALL, "Russian");
	const int SIZE = 5;
	int arr[SIZE] = { 3, 5, 8 };
	cout << "������� �������� ���������: ";
	for (int i = 0; i < SIZE; i++) // ����� � �������� �������
	{
		cin >> arr[i];
	}
	cout << "����� � �������� �������: ";
	for (int i = SIZE - 1; i >= 0; i--)

	{
		cout << arr[i] << tab;
	}
	cout << endl;

	double sum = 0; // ����� � ������� ����� �����

	for (int i = 0; i < SIZE; i++)
	{
		sum += arr[i];
	}
	cout << "����� �������������� �����: " << sum << endl;
	cout << "������� �������������� �����: " << sum / SIZE << endl;

	int max = arr[0];
	int min = arr[0];
	
	for (int i = 0; i < SIZE; i++)
	{
		if (arr[i] > max) max = arr[i];
		if (arr[i] < min) min = arr[i];
	}
	cout << "������������ �����: " << max;
	cout << endl;
	cout << "����������� �����: " << min;
	cout << endl;

}

#include <iostream>
#include <Windows.h>
using namespace std;

int Cube(int x)
{
	return x * x * x;
}


int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int x;
	cout << "������ �����. ��� ��������� ������� �� ����" << endl;
	cin >> x;
	cout << endl;
	Cube(x);


	return 0;
}

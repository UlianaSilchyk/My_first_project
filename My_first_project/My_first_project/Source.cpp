
#include <iostream>
#include <Windows.h>
using namespace std;

int Cube(int x)
{
	return x * x * x;
}

void Show_cub(int x)
{
	
	cout << x << " � ��� = " << Cube(x) << endl;
}


int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int x;
	cout << "������ �����. ��� ��������� ������� �� ����" << endl;
	cin >> x;
	cout << endl;
	Show_cub(x);


	return 0;
}

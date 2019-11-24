#include <iostream>
#include <windows.h>
using namespace std;
int main()
{
	setlocale(LC_ALL, "rus");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	char C;
	cout << "Введите символ: ";
	cin >> C;
	cout << "Предыдущий символ: " << char(C - 1) << endl;
	cout << "Следующий символ: " << char(C + 1) << endl;
	return 0;
}
#include <iostream>
#include <windows.h>
#include <string>
using namespace std;
int main()
{
	setlocale(LC_ALL, "rus");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	string s;
	int i, n;
	cout << "Введите строку: ";
	getline(cin, s);
	n = s.length();
	for (i = 0; i <= (2 * n); i++)
		cout << s[i] << " ";
	return 0;
}

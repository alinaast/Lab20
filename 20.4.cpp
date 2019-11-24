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
	char c;
	int i, n, k = 0;
	cout << "Введите строку: ";
	getline(cin, s);
	cout << "Введите искомый символ: ";
	cin >> c;
	n = s.length();
	for (i = 0; i <= n; i++)
		if (s[i] == c)
			k++;
	for (i = 0; i <= (n + k); i++)
	{
		if (s[i] == c)
			cout << s[i] << s[i];
		else
			cout << s[i];
	}
	return 0;
}
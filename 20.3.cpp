#include <iostream>
#include <windows.h>
#include <string>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	string s;
    int i, n, k = 0;
    cout << "Введите строку: ";
	getline(cin, s);
	n = s.length();
	for (i = 0; i <= n; i++)
	{
		if (isupper(s[i]))
			k++;
	}
	cout << "Количество прописных букв в строке: " << k;
	return 0;
}
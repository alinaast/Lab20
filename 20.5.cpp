#include <iostream>
#include <windows.h>
#include <string>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	string s, s0;
	int i, n, k;
	int t = 0;
	int j = 0;
	int l = 0;
	cout << "Введите строку: ";
	getline(cin, s);
	cout << "Введите строку 2: ";
	getline(cin, s0);
	n = s.length();
	k = s0.length();
	for (i = 0; i <= n; i++)
	{
		if (s[i] == s0[j])
		{
			t++;
			j++;
			if (t == k)
				l++;
		}
	     else
		{
			j = 0;
			t = 0;
		}
	}
	cout << l;
	return 0;
}

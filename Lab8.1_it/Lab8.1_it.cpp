﻿#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;
int Count(char* str)
{
	if (strlen(str) < 2)
		return 0;
	int k = 0;
	for (int i = 0; str[i + 1] != 0; i++)
		if (str[i] == ',' && str[i + 1] == '-')
			k++;
	return k;
}
char* Change(char* str)
{
	size_t len = strlen(str);
	if (len < 3)
		return str;
	char* tmp = new char[len * 3 / 2 + 1];
	char* t = tmp;
	tmp[0] = '\0';
	size_t i = 0;

	while (i < len && str[i + 1] != 0)
	{
		if (str[i] == ',' && str[i + 1] == '-')
		{
			strcat(t, "*");
			t += 1;
			i += 2;
		}
		else
		{
			*t++ = str[i++];
			*t = '\0';
		}
	}
	*t++ = str[i++];
	*t++ = str[i++];
	*t = '\0';
	strcpy(str, tmp);
	return tmp;
}
int main()
{
	char str[101];
	cout << "Enter string:" << endl;
	cin.getline(str, 100);
	cout << "String contained " << Count(str) << " groups of ',-'" << endl;
	char* dest = new char[151];
	dest = Change(str);
	cout << "Modified string (param) : " << str << endl;
	cout << "Modified string (result): " << dest << endl;
	return 0;
}
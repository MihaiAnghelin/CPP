// Limba pasareasca insert.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string.h>

using namespace std;

int main()
{
	char str[256], a[256];
	cin.get(str, 256);
	for (int i = 0; i < strlen(str); i++)
	{
		if (strchr("AEIOUaeiou", str[i]) != 0)
		{
			strcpy(a, str + i + 1);
			strcpy(str + i + 3, a);
			str[i + 1] = 'p';
			str[i + 2] = str[i];
			i += 2;
		}
	}
	cout <<endl<< str;

}
// var 60 sub 2 ex 5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string.h>

using namespace std;

int main()
{
	char str[51], a = 'z', b = 'z';
	int max=0,h;
	cin.get(str, 51);
	for (int i = 0; i < strlen(str); i++) 
	{
		h = 0;
		for (int j = i; j < strlen(str); j++)
		{
			if (str[j] == ' ' || (str[j] >= 'A' && str[j] <= 'Z') || (str[j] >= '0' && str[j] <= '9')) j++;
			else if (str[j] == str[i]) 
			{
				h++;
				b = str[i];
			}
		}
		if (h >= max && b < a) {
			max = h;
			a = str[i];
		}
	}
	if (a == 'z') cout << "Nu exista litere mici.";
	else cout << a;
}
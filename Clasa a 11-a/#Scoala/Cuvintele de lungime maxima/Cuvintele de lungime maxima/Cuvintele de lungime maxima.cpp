// Cuvintele de lungime maxima.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{
	string str,str2="";
	int c = 0,max=0;
	getline(cin, str);
	reverse(str.begin(), str.end());
	str += " ";
	reverse(str.begin(), str.end());
	for (int i = 1; i < str.length(); i++)
	{
		c = 0;
		if (str[i - 1] == ' ')
		while ((str[i] >= 'a'&&str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
		{
			c++;
			i++;
		}
		if (c > max) max = c;
	}
	for (int i = 1; i < str.length(); i++)
	{
		c = 0;
		int j = i;
		if (str[i - 1] == ' ')
		while ((str[i] >= 'a'&&str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
		{
			c++;
			i++;
		}
		if (c == max) str2 += (str.substr(j, i-1) + "*");
	}
	str2.erase(str2.length() - max - 1, max + 1);
	cout << str2;
}
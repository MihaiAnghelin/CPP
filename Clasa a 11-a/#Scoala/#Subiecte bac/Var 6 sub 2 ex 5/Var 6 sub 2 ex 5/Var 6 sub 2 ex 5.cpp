// Var 6 sub 2 ex 5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{
	string str;
	getline(cin,str);
	str[0] -=  32;
	for (int i = 1; i <= str.length(); i++)
		if (str[i] >= 'a' && str[i] <= 'z' && str[i - 1] == ' ')
			str[i] -= 32;
	cout << str;
}
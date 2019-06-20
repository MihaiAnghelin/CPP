// Complete The Pattern 8 - Number Pyramid.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <string>

using namespace std;

string pattern(int n)
{
	string a = "";
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= 2 * n; j++)
			if (j <= n - i || j >= n + i) {
				a += ' ';
			}
			else
			{
				
				for (int h = 1; h < i; h++) {
					a += to_string(h % 10);
					j++;
				}
				
				for (int h = i; h >= 1; h--) {
					a += to_string(h % 10);
					j++;
				}
				
			}
		if(i!=n) a += '\n';
	}
	return a;
}

int main()
{
	cout << pattern(5);
}
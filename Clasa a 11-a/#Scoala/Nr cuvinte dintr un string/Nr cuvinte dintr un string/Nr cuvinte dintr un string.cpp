// Nr cuvinte dintr un string.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{
	int nr = 1;
	string str;
	cout << "Introduceti textul dorit: \n";
	getline(cin, str);
	for (int i = 0; i < str.length(); i++)
	{
		if (str[i] == ' ' || str[i] == ',' || str[i] == '.')
			nr++;
	}
	if (str[str.length() - 1 ] == '.') nr--;
	cout <<"Textul introdus contine "<< nr << " cuvinte."<<endl;
}

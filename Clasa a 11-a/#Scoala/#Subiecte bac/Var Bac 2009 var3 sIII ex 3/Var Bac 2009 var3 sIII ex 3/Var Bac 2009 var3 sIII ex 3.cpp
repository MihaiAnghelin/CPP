// Var Bac 2009 var3 sIII ex 3.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	int a, i = -1, v[99];
	bool ok = false;
	ifstream f("NR.TXT");
	while (!f.eof())
	{
		f >> a;
		if (a > 99) {
			v[++i] = a;
			ok = true;
		}
	}
	for (int h = 0; h < i; h++)
		for (int j = 0; j < i; j++)
			if (v[j] > v[j + 1])
			{
				v[j] = v[j] + v[j + 1];
				v[j + 1] = v[j] - v[j + 1];
				v[j] = v[j] - v[j + 1];
			}
	if (ok == true)
		for (int j = 0; j <= i; j++)
			cout << v[j] << " ";
	else
		cout << "NU EXISTA\n";
	f.close();
    return 0;
}


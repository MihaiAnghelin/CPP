// ConsoleApplication1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

void interesc(int &a, int &b)
{
	int man = a;
	a = b;
	b = man;
}

int main()
{
	int x = 2, y = 3;
	interesc(x, y);
	cout << x << " " << y;
    return 0;
}


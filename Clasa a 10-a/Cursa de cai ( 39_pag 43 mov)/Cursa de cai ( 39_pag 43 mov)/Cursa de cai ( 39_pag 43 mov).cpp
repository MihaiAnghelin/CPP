// Cursa de cai ( 39_pag 43 mov).cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	int x, y;
	cout << "Mutarea lui Swaps (y): "; cin >> y;
	x = 9 * y + 11 - 64 * (int((9 * y + 11) / 64));
	do
	{
		y = y + 9 * x + 12 - 64 * (int((9 * x + 12) / 64));
		x = x + 9 * y + 11 - 64 * (int((9 * y + 11) / 64));
		
	} while (x < 1000 && y < 1000);
	if (x > y) cout << "Man o' War(x) este castigator!\n";
	else cout << "Swaps(y) este castigator!\n";

    return 0;
}


// Numere complexe 2.cpp : Defines the entry point for the console application.
//


// * inmulteste 2 numere complexe 
// / imparte 2 numere complexe 
// + aduna 2 numere complexe
// - scade 2 numere complexe
// ^ ridica un numar complex la o putere
// / imparte 2 numere complexe

#include "stdafx.h"
#include "complex.h"
#include <iostream>

using namespace std;

int main()
{
	complex z1(2, 3);
	complex z2(1, -1);
	complex z3 = z1 * z2;
	z3.afis();
	
	return 0;
}

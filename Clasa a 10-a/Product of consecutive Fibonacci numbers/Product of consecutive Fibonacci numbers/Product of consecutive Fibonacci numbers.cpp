// Product of consecutive Fibonacci numbers.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <vector>

using namespace std;

typedef unsigned long long ull;

class ProdFib
{
public:
	static vector<ull> productFib(ull prod);
};

vector<ull> ProdFib::productFib(ull prod)
{
	ull f1 = 0, f2 = 1, c;
	bool ok = 1;
	while (ok)
	{
		if (f1*f2 == prod)
		{
			return { f1, f2, true };   
			ok = 0;
		}
		else if (f1*f2 < prod)
		{
			c = f1;
			f1 = f2;
			f2 += c;
		}
		else //if (f1*f2 > prod)
		{
			return { f1, f2, false };
			ok = 0;
		}

	}
	
}

int main()
{
	return 0;
}

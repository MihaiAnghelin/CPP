#include "pch.h"
#include <iostream>

int P(int a[100], int n, int k)
{
	int s = 0;
	for (int h = 1; h <= k; h++)
	{
		int max = 0, iMax;
		for (int i = 0; i < n; i++)
		{
			if (a[i] > max) {
				max = a[i];
				iMax = i;
			}
		}
		s += max;
		for (int i = 0; i < n; i++)
		{
			if (i == iMax)
			{
				for (int j = i; j < n - 1; j++)
				{
					a[j] = a[j + 1];
				}
				n--;
				break;
			}
		}
	}
	return s;
}

int main()
{
	int a[100] = { 5, 2, 5, 4, 1, 3 };
	std::cout << P(a, 6, 4);
}
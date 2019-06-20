// Codility Binary Gaps.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>

using namespace std;

int solution(int N) {
	bool binaryN[32];
	int i = -1;
	while (N)
	{
		i++;
		binaryN[i] = N % 2;
		N /= 2;
	}
	int max = 0;
	for (int j = 0; j < i; j++)
	{
		if (binaryN[j] == 1) {
			j++;
			int nr = 0;
			while (binaryN[j] == 0)
			{
				nr++;
				j++;
			}
			if (nr > max) max = nr;
			j--;
		}
	}
	return max;
}

int main()
{
	cout << solution(5);
}
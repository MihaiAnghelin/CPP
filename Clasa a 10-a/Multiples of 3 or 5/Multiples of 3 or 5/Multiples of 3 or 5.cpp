// Multiples of 3 or 5.cpp : Defines the entry point for the console application.
//https://www.codewars.com/kata/multiples-of-3-or-5/train/cpp

#include "stdafx.h"

int solution(int number)
{
	int sum = 0;
	for (int i = 3; i < number; i++)
		if (i % 3 == 0 || i % 5 == 0)
			sum += i;
	return sum;
}

int main()
{
    return 0;
}


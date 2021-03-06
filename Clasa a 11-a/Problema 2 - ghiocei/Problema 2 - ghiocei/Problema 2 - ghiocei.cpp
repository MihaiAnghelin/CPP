#include "pch.h"
#include <iostream>
#include <fstream>

using namespace std;

void swap(int &a, int &b)
{
	a += b;
	b = a - b;
	a -= b;
}

bool cautare(int cif, int nr)
{
	bool ok = false;
	while (nr)
	{
		if (cif == nr % 10) 
		{
			ok = true;
			break;
		}
		nr /= 10;
	}
	return ok;
}

int length(int a)
{
	int l = 0;
	while (a)
	{
		l++;
		a /= 10;
	}
	return l;
}

void add(int &a)
{
	int sum = 0;
	while (a)
	{
		sum += a % 10;
		a /= 10;
	}
	a = sum;
}

int main()
{
	ifstream fin("ghiocei.in");
	ofstream fout("ghiocei.out");
	short n;
	int matrix[101][101];
	int max = 0;
	fin >> n;
	for (short i = 1; i <= n; i++)
	{
		for (short j = 1; j <= n; j++)
		{
			fin >> matrix[i][j];
			short aux = matrix[i][j];
			while (aux) 
			{
				if (cautare(aux % 10, max) == false)
				{
					max *= 10;
					max += (aux % 10);
				}
				aux /= 10;
			}
		}
	}
	short min;
	if (max % 10 == 0) min = max / 10 % 10;
	else min = max % 10;
	int aux = max;
	aux /= 10;
	while (aux)
	{
		if ((min > aux % 10) && (aux % 10 != 0))
		{
			min = aux % 10;
		}
		aux /= 10;
	}

	aux = max;
	int array[10];
	for (short i = length(max)-1; i >=0; i--)
	{
		array[i] = aux % 10;
		aux /= 10;
	}	
	for (short i = 0; i < length(max); i++)
	{
		if (min == array[i])
		{
			swap(array[i], array[0]);
		}
	}
	for (short i = 1; i < length(max) - 1; i++)
	{
		for (int j = 1; j < length(max) - 1; j++)
		{
			if (array[j] > array[j + 1])
				swap(array[j], array[j + 1]);
		}
	}
	for (short i = 0; i < length(max); i++)
	{
		fout << array[i];
	}
	fout << "\n";
	for (short i = 1; i <= n; i++)
	{
		for (short j = 1; j <= n; j++)
		{
			add(matrix[i][j]);
			fout << matrix[i][j]<<" ";
		}
		fout << "\n";
	}
	fin.close();
	fout.close();
}
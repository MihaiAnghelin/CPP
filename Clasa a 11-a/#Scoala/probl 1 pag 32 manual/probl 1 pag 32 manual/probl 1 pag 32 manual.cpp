
#include "pch.h"
#include <iostream>

using namespace std;

int suma(int vec[], int n)
{
	int s = 0;
	for (int i = 0; i < n; i++)
	{
		s += vec[i];
	}
	return s;
}
int sumapozitive(int vec[], int n)
{
	int s = 0;
	for (int i = 0; i < n; i++)
	{
		if (vec[i] >= 0)
			s += vec[i];
	}
	return s;
}
float media(int vec[], int n) 
{
	return (float)suma(vec,n) / n;
}
float mediapoz(int vec[], int n)
{
	return (float)sumapozitive(vec, n) / n;
}

int main()
{
	int v[20] = { 1, 5, -8, 7, 4, 6, 25, -78, 45 };
	int n = 9;
	cout << "Suma = " << suma(v, n);
	cout << "\nSuma elementelor pozitive = " << sumapozitive(v, n);
	cout << "\nMedia = " << media(v, n);
	cout << "\nMedia elementelor pozitive = " << mediapoz(v, n);
}
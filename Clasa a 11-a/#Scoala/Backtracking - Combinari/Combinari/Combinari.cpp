#include "pch.h"
#include <iostream>

using namespace std;

int x[30], n, m, var = 0;

void init(int k)
{
	x[k] = var++;
}
int exista(int k)
{
	return (x[k] < n);
}
bool valid(int k)
{
	bool ev = true;
	for (int i = 1; i < k; i++)
	{
		if (x[i] == x[k])
			ev = false;
	}
	return ev;
}
bool solutie(int k)
{
	return (k == m);

}
void tipar()
{
	for (int i = 1; i <= m; i++)
	{
		cout << x[i] << " ";
	}
	cout << endl;
}
void back()
{
	int k = 1;
	init(k);
	while (k > 0)
	{
		if (exista(k))
		{
			x[k]++;
			if (valid(k))
			{
				if (solutie(k))
				{
					tipar();
				}
				else
				{
					k++;
					init(k);
				}
			}
		}
		else
		{
			k--;
		}
	}
}
int main()
{
	cout << "n = "; cin >> n;
	cout << "m = "; cin >> m;
	back();
}
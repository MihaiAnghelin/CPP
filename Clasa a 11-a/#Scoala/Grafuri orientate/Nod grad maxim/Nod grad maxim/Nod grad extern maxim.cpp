#include<iostream>

using namespace std;

int a[10][10], n;

void citire()
{
	cout << "Cititi numarul nodurilor(n) = ";
	cin >> n;
	for (int i = 1; i <= n; i++)
		for (int j = 1; j <= n; j++)
		{
			cout << "a[" << i << "][" << j << "] = ";
			cin >> a[i][j];
		}
}

int gradExterior(int x)
{
	int sum = 0;
	for (int i = 1; i <= n; i++)
	{
		if (a[x][i])
			sum++;
	}
	return sum;
}


int main()
{
	citire();
	int max = -1;
	for (int i = 1; i <= n; i++)
	{
		if (gradExterior(i) > max)
			max = gradExterior(i);
	}
	cout << "Nodul(nodurile) cu grad exterior maxim este(sunt): ";
	for (int i = 1; i <= n; i++)
	{
		if (gradExterior(i) == max)
			cout << i << " ";
	}

	return 0;
}
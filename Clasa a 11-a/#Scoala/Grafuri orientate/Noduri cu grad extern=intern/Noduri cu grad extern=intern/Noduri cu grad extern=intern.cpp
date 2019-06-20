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

int gradInterior(int x)
{
	int sum = 0;
	for (int i = 1; i <= n; i++)
	{
		if (a[i][x])
			sum++;
	}
	return sum;
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
	bool ok = false;
	cout << "Nodurile cu gradul intern egal cu cel extern: ";
	for(int i = 1; i<= n; i++)
		if (gradInterior(i) == gradExterior(i))
		{
			ok = true;
			cout << i << ", ";
		}
	if (ok == false)
		cout << "\nNu exista";
	return 0;
}
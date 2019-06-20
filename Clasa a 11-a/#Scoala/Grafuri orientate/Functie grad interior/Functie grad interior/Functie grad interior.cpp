#include<iostream>

using namespace std;

int n, a[10][10];

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

int selectareNod()
{
	int x;
	cout << "Introduceti numarul nodului caruia doriti sa-i aflati gradul interior: \nx = ";
	cin >> x;
	return x;
}

int main()
{
	citire();
	int x = selectareNod();
	cout << "Gradul interior al nodului " << x << " este:\nd-("<<x<<") = " << gradInterior(x)<<endl;
	return 0;
}
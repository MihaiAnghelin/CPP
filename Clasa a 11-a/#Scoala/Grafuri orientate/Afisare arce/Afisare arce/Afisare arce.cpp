#include<iostream>
#include<fstream>

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

int main()
{
	citire();
	ofstream f("arce.txt");
	for (int i = 1; i <= n; i++)
		for (int j = 1; j <= n; j++)
		{
			if (a[i][j])
			{
				f << "(" << i << ", " << j << ")\n";
			}
		}
	f.close();
	return 0;
}
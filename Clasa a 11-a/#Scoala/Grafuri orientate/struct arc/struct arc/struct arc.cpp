#include<iostream>

using namespace std;

int a[10][10];

struct arc
{
	int v1, v2;
	int cost;

	void valori(int x1, int x2, int c)
	{
		v1 = x1;
		v2 = x2;
		cost = c;
	}
}arce[10];


int main()
{
	int m, n;
	float costMediu = 0;
	cout << "Numarul de muchii este:\nm = ";
	cin >> m;
	cout << "Numarul de noduri este:\nn = ";
	cin >> n;
	for (int i = 1; i <= m; i++)
	{
		int v1, v2, cost;
		cout << "Primul varf al muchiei " << i << ": "; cin >> v1;
		cout << "Al doilea varf al muchiei " << i << ": "; cin >> v2;
		cout << "Costul muchiei " << i << ": "; cin >> cost;
		arce[i].valori(v1, v2, cost);
		costMediu += arce[i].cost;
	}
	for (int h = 1; h <= m; h++)
		for (int i = 1; i <= n; i++)
			for (int j = 1; j <= n; j++)
			{
				if (arce[h].v1 == i && arce[h].v2 == j)
					a[i][j] = 1;
			}
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			cout << a[i][j] << " ";
		}
		cout << '\n';
	}
	costMediu /= m;
	cout << "Costul mediu al grafului este " << costMediu;
	return 0;
}
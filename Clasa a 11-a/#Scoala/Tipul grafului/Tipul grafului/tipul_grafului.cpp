// Sa se determine tipul unui graf dat (graf nul, regulat, complet, oarecare)
// (Daca toate nodurile au acelasi grad, graful se numeste regulat) datele despre graf se citesc din fisierul graf.in
// ce contine pe prima linie n(nr de noduri) m (numarul de muchii), iar pe urmatoarele m linii cele doua capete ale fiecarei muchii.


#include <iostream>
#include<fstream>

using namespace std;

ifstream v("graf.in");


int a[20][20], n, m;
void citire() 
{
	int x1, x2;
	v >> n >> m;
	for (int i = 1; i <= m; i++)
	{
		v >> x1 >> x2;
		a[x1][x2] = 1;
		a[x2][x1] = 1;
	}
}

bool nul() 
{
	return(m == 0);
}

bool regulat() 
{
	int grad1 = 0;
	int s;
	bool ok = true;
	for (int i = 1; i <= n; i++)
	{
		if (a[1][i] == 1)
		{
			grad1++;
		}
	}
	for (int i = 2; i <= n; i++) 
	{
		s = 0;
		for (int j = 1; j <= n; j++) 
		{
			if (a[i][j] == 1) 
			{
				s++;
			}
		}
		if (s != grad1)
		{
			ok = false;
			i = n + 1;
		}
	}
	return ok;
}

bool complet() 
{
	return (m == ((n * (n - 1)) / 2));
}

int main() 
{
	citire();
	if (nul())
		cout << "Graf nul";
	else if (complet())
		cout << "Graf complet";
	else if (regulat())
		cout << "Graf reguat";	
	else 
		cout << "Graf oarecare";

}
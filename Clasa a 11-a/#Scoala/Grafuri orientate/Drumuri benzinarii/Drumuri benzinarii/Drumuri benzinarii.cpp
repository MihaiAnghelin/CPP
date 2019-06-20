#include <iostream>
#include <fstream>

using namespace std;

int a[10][10], n;

struct muchii {
	int v1, v2;    //benzinariile de la capatul drumurilor
	int distanta;  //distanta unui drum direct de la prima benzinarie la a doua

	void set(int x1, int x2, int d)
	{
		v1 = x1;
		v2 = x2;
		distanta = d;
	}
	void afisare()
	{
		cout << "(" << v1 << ", " << v2 << ", " << distanta << ")";
	}

}v[20];

void citire_tastatura() //citire matrice generalizata
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

void citire_fisier()
{
	ifstream f("citire.in");
	f >> n;
	for (int i = 1; i <= n; i++)
		for (int j = 1; j <= n; j++)
		{
			f >> a[i][j];
		}
}

void valori_stabilite(int &l1, int &l2) //citire valori stabilite intre care se afla suma totala a lungimilor drumurilor directe
{
	cout << "Introduceti prima valoare stabilita:\nL1 = ";
	cin >> l1;
	cout << "Introduceti a doua valoare stabilita:\nL2 = ";
	cin >> l2;
}

int suma_totala_drumuri()
{
	int sum = 0;
	for (int i = 1; i <= n; i++)
		for (int j = 1; j <= n; j++)
		{
			if (a[i][j] == a[j][i])
			{
				if (i < j)
				{
					sum += a[i][j];
				}
			}
			else
			{
				sum += a[i][j];
			}
		}
	return sum;
}

int vector_muchii()
{
	int ind = 1;
	for (int i = 1; i <= n; i++)
		for (int j = 1; j <= n; j++)
		{
			if (a[i][j] == a[j][i])
			{
				if (i < j)
				{
					v[ind].set(i, j, a[i][j]);
					ind++;
				}
			}
			else
			{
				v[ind].set(i, j, a[i][j]);
				ind++;
			}
		}
	return (ind-1);
}

#pragma region Backtracking

int v[20];
int lungime_stiva = vector_muchii();

// DE ADAUAGAT RESTUL FUNCTIILOR PENTRU BACKTRACKING




void tipar()
{
	for (int i = 1; i <= n; i++)
	{
		v[i].afisare;
	}
}

void back()
{

	int k = 1;
	init(k);
	while (k > 0)
	{
		if (exista(k))
		{
			v[k]++;
			if(valid(k))
				if(solutie(k))
				{
					tipar();
				}
				else
				{
					k++;
					init(k);
				}
		}
		else
		{
			k--;
		}
	}

}
#pragma endregion

int main()
{
	int L1, L2;
	citire_fisier();
	valori_stabilite(L1, L2);
	//cout << suma_totala_drumuri();
	back();
	return 0;
}
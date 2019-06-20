/*
	Problema comis-voiajorului

	Un comis-voiajor trebuie sa viziteze un nr. de n orase. Initial acesta se fla intr-unul dintre ele,
	notat 1. Comis-voiajorul doreste sa nu treaca de 2 ori prin acelasi oras, iar la intoarcere sa revina
	de unde a plecat. Cunoscand legaturile dintre orase, se cere sa se genereze toate drumurile posibile
	pe care le paote efectua comis-voiajorul.

	ex. n = 5

	// Matricea de adiacenta a oraselor
	   1 2 3 4 5									Solutii:
	1 (0 1 0 1 1									1 2 3 4 5 1
	2  1 0 1 0 0									1 2 3 5 4 1
	3  0 1 0 1 1									1 4 5 3 2 1
	4  1 0 1 0 1									1 5 4 3 2 1
	5  1 0 1 1 0)

*/

#include<iostream>
#include<fstream>
#include<stdlib.h>

using namespace std;
typedef char string[16];;

fstream f("fisier.in");
int x[10], n, a[11][11];

string orase[10];

void init(int k)
{
	x[k] = 0;
}

bool exista(int k)
{
	return (x[k] < n + 1);
}

bool valid(int k)
{
	bool ev = true;
	for(int i = 1; i < k ; i++)
    {
        if(x[k] == x[i])
        {
            ev = false;
            break;
        }
    }
    if(ev)
    {

    }

    return ev;
}

bool solutie(int k)
{
	return (k == n + 1);
}

//int index = 1;
void tipar()
{
	//cout << index++ << ". ";
	for (int i = 1; i <= n + 1; i++)
		cout << orase[x[i]] << " ";
	cout << endl;
}

void back()
{
    x[1] = 1;
	int k = 2;
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
	f >> n;      //numarul de orase

	//citire orase
	for (int i = 1; i <= n; i++)
	{
		cout << "Introduceti orasul " << i << ": ";
		cin >> orase[i];
	}

	//citire matrice de adiacenta
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			f >> a[i][j];
		}
	}

	back();
	system("pause");
	return 0;
}

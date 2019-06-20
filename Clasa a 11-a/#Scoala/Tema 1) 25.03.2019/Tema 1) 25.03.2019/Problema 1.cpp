/*
	Se citeste matricea de adiacenta a unui graf neorientat cu n noduri.
	Sa se scrie muchiile grafului in fisierul "muchii.txt".
	(pe fiecare rand se vor scrie extremitatile unei muchii separate prin cate un spatiu)
*/


#include<iostream>
#include<fstream>
#include<cstdlib>

using namespace std;

int a[20][20];

int main()
{
	ofstream out("muchii.txt");
	int n;
	cout << "Introduceti numarul de noduri din graf = ";
	cin >> n;
	cout << "\nIntroduceti jumatatea superioara(fata de diagonala principala) a matricei de adiacenta: \n\n";
	for (int i = 1; i <= n; i++)
	{
		for (int j = i + 1; j <= n; j++)
		{
			
			cout << "a["<<i<<"]["<<j<<"] = ";
			cin >> a[i][j];
			a[j][i] = a[i][j];
		}
		cout << "\n";
	}
	for (int i = 1; i <= n; i++)
	{
		for (int j = i + 1; j <= n; j++)
		{
			if (a[i][j])
			{
				out << i << " " << j << "\n";
			}
		}
	}

	system("pause");
	return 0;
}
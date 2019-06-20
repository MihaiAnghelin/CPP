/*
	Se citeste de la tastatura matricea de adiacenta a unui graf neorientat cu n noduri.
	Sa se tipareasca nodurile al caror grad este egal cu o valoare data p.
*/



#include<iostream>
#include<fstream>
#include<cstdlib>

using namespace std;

bool a[20][20]; // matricea de adiacenta(declarata global pentru a se initializa cu 0)

int main()
{
	ifstream f("graf.in"); // fisier din care se citeste numarul de noduri si matricea de adiacenta

	int n; // numarul de noduri din graf (citit din fisier)
	int p; // valoarea cu care se compara gradul nodurilor din graf (citit de la tastatura)

	f >> n;

	cout << "Introduceti numarul cu care se compara gradul nodurilor din graful introdus in fisier: ";
	cin >> p;
	cout << "\n";
	bool ok = false; //  verifica daca exista cel putin un nod cu gradul p

	for (int i = 1; i <= n; i++)		// citirea matricei de adiacenta din fisier
	{									// citirea se face complet pentru a numara muchiile adiacente fiecarui nod
		int sum = 0; // sum numara cate muchii adiacente are nodul i 
		for (int j = 1; j <= n; j++)
		{
			f >> a[i][j]; //citirea din fisier a elementului a[i][j]
			if (true == a[i][j])
			{
				sum++;
			}
		}
		if (sum == p)
		{
			ok = true;
			cout << "Gradul nodului " << i << " este egal cu " << p << ".\n";
		}
	}
	if (false == ok)
	{
		cout << "Nu exista niciun nod in graf cu gradul " << p<<".";
	}
	cout << "\n\n";

	f.close();
	system("pause");
	return 0;
}
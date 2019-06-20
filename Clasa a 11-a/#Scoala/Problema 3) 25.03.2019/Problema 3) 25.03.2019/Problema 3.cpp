/*
	Se defineste o muchie a unui graf neorientat ca o inregistrare cu 3 campuri:
		- cele 2 varfuri extremitati;
		- cost asociat muchiei(intreg).
	Definim un graf neorientat ca un vector de muchii. Fiind dat vecotrul de muchii
	al unui graf neorientat G(X, U) m muchii, n noduri, sa se tipareasca muchia
	(muchiile) de cost minim.
*/

// Nota: Citirea se face din fisier pentru a fi mai usoara testarea programului
/*	
	* In fisier se afla pe prima linie numarul de noduri si numarul de muchii
	  iar in continuare pe cate o linie nodurile adiacente fiecarei muchii si costul acesteia
*/
#include <iostream>
#include <fstream>
#include <cstdlib>

using namespace std;

struct muchie
{
	int v1, v2; // varfurile adiacente miuchiei
	int cost;   // costul asociat muchiei
}muchii[20];

int main()
{
	int m; //numarul de muchii
	int n; //numarul de noduri
	ifstream f("graf.in"); // fisierul din care se citeste graful
	f >> n >> m; //citirea din fisier a numarului de noduri si de muchii
	
	f >> muchii[1].v1 >> muchii[1].v2 >> muchii[1].cost; //citirea primei perechi de noduri
	int min = muchii[1].cost;		//initializarea valorii minime a costului cu costul corespunzator primei muchii citite
	for (int i = 2; i <= m; i++)
	{														 // citirea din fisier a nodurilor si a costului
		f >> muchii[i].v1 >> muchii[i].v2 >> muchii[i].cost; // corespunzatoare fiecarei muchii
		if (muchii[i].cost < min)	// compararea costului minim actual cu fiecare cost in parte 
		{							// pentru a afla adevaratul cost minim
			min = muchii[i].cost;
		}
	}
	
	cout << "Muchia(muchiile) de cost minim este(sunt) : \n\n";
	for (int i = 1; i <= m; i++)
	{								//se parcurge a 2-a oara vectorul de muchii pentru a se afisa costurile minime
		if (min == muchii[i].cost)
		{
			cout << muchii[i].v1 << " - " << muchii[i].v2<<"\n";
		}
	}
	cout << "\n";
	f.close();
	system("pause");
	return 0;
}
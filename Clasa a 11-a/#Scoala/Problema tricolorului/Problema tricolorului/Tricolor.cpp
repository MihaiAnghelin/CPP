// Programm care rezolva problema tricolorului
/*
	* Se citesc n culori;
	* Sa se alcatuiasca toate steagurile tricolore posibile astfel incat in mijloc
      sa se afle doar una din ultimele doua culori citite.
    * Se va afisa pe friecare rand: "nr. drapelului: culoare1, culoare 2, culoare3".
*/

#include <iostream>
#include <cstdlib>
#include <string>
#include <vector>

int x[10], n;
std::vector <std::string> culoare;

void init(int k)
{
	x[k] = 0;
}

bool exista(int k)
{
	return (x[k] < n);
}

bool valid(int k)
{
	bool ev = true;
	for (int i = 0; i < k; i++)
	{
		if (x[i] == x[k])
			ev = false;
	}

	if (ev && k==2)
	{
		if (x[k] != n || x[k] != n - 1)
		{
			ev = false;
		}
	}
	return ev;
}

bool solutie(int k)
{
	return (k == 3);
}

int nrDrapel = 1;

void tipar()
{
	std::cout << nrDrapel << ". ";
	for (int i = 0; i < 3; i++)
		std::cout << culoare[x[i]]<<", ";
	std::cout << "\n";
}

void back()
{
	int k = 1;
	init(k);
	while (k > 0)
	{
		if (exista(k))
		{
			x[k]++;
			if(valid(k))
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
		else
		{
			k--;
		}
	}
}

int main()
{
	std::cout << "Numarul de culori: ";
	std::cin >> n;
	std::string str;
	for (int i = 0; i < n; i++)
	{
		std::cout << "Culoarea " << i << ": ";
		std::cin >> str;
		culoare.push_back(str);
	}
	back();
	system("pause");
	return 0;
}

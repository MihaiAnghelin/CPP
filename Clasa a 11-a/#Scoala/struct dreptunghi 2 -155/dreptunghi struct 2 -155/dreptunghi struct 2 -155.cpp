#include "pch.h"
#include <iostream>
#include<cmath>

using namespace std;

int main()
{
	struct dreptughi
	{
		float lungime, latime, diagonala;
	}v[20];
	int n, d;
	float lun=0, lat=0;
	cout << "Introduceti numarul de dreptunghiuri: ";
	cin >> n;
	cout << "Introduceti diagonala d: ";
	cin >> d;
	for (int i = 1; i <= n; i++) 
	{
		cout << "Latimea dreptughiului " << i << " : "; cin >> v[i].latime;
		cout << "Lungimea dreptughiului " << i << " : "; cin >> v[i].lungime;
		v[i].diagonala = sqrt(v[i].latime*v[i].latime + v[i].lungime*v[i].lungime);
		if (v[i].diagonala == d)
		{
			lun = v[i].lungime;
			lat = v[i].latime;
		}
	}
	if (lun)
		cout << "Dreptunghiul cu lungimea " << lun << " si latimea " << lat << " are diagonala egala cu d.";
	else
		cout << "Nu exista niciun dreptunghi cu diagonala egala cu d";
}
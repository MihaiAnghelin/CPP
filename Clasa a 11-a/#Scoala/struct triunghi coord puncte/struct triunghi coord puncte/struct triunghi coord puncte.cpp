#include "pch.h"
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	struct triunghi {
		struct puncte {
			float x, y;
		}pct1,pct2;
		float lungime;
	}a, b, c;
	cout << "Introduceti coordonatele segmentului a:\n";
	cout << "x(A) = "; cin >> a.pct1.x;
	cout << "y(A) = "; cin >> a.pct1.y;
	cout << "x(B) = "; cin >> a.pct2.x;
	cout << "y(B) = "; cin >> a.pct2.y;
	a.lungime = sqrt((a.pct1.x - a.pct2.x) * (a.pct1.x - a.pct2.x) + (a.pct1.y - a.pct2.y) * (a.pct1.y - a.pct2.y));
	cout << "Introduceti coordonatele segmentului b:\n";
	cout << "x(C) = "; cin >> b.pct1.x;
	cout << "y(C) = "; cin >> b.pct1.y;
	cout << "x(D) = "; cin >> b.pct2.x;
	cout << "y(D) = "; cin >> b.pct2.y;
	b.lungime = sqrt((b.pct1.x - b.pct2.x) * (b.pct1.x - b.pct2.x) + (b.pct1.y - b.pct2.y) * (b.pct1.y - b.pct2.y));
	cout << "Introduceti coordonatele segmentului c:\n";
	cout << "x(F) = "; cin >> c.pct1.x;
	cout << "y(F) = "; cin >> c.pct1.y;
	cout << "x(E) = "; cin >> c.pct2.x;
	cout << "y(E) = "; cin >> c.pct2.y;
	c.lungime = sqrt((c.pct1.x - c.pct2.x) * (c.pct1.x - c.pct2.x) + (c.pct1.y - c.pct2.y) * (c.pct1.y - c.pct2.y));
	bool ok;
	if (a.lungime + b.lungime > c.lungime && a.lungime + c.lungime > b.lungime && b.lungime + c.lungime > a.lungime)
	{
		cout << "Pot fi laturile unui triunghi";
		ok = true;
	}
	else
	{
		cout << "Nu pot fi laturile unui triunghi";
		ok = false;
	}

}
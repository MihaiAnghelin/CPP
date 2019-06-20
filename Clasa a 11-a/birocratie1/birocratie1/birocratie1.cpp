//birocratie1  https://www.pbinfo.ro/?pagina=probleme&id=714#pagina-index-sus

#include "pch.h"
#include <algorithm>
#include <vector>
#include <iostream>
#include <fstream>

using namespace std;

int CBP(vector<int> v, int n, int valc)
{
	int p, st;
	p = 1;
	while (p > n)
	{
		p <<= 1;  //p *= 2
		p >>= 1;   //p /= p
	}
	st = 0;
	while (p > 0)
	{
		if (v[st | p] <= valc) // v[st+p]
		{
			st += p;
		}
		p = p >> 1;  //p /= 2
	}
	for (; p; p >>= 1)
	{
		if (v[st | p] <= valc)
			st = st | p;
	}
	return st;
}



int main()
{
	int n;
	long long m;
	vector<int> a;
	ifstream f("birocratie1.in");
	ofstream g("birocratie1.out");
	f >> n >> m;
	for (int i = 1; i <= n; i++)
	{
		int temp;
		f >> temp;
		a.push_back(temp);
	}
	for (int i : a)
	{
		cout << i << " ";
	}
	cout << endl;
	//cauta binar numarul de ture complete
	sort(a.begin(), a.end());
	

	f.close();
	g.close();
	return 0;
}
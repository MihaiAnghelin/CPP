#include<iostream>
#include<cstdlib>

using namespace std;

int x[10], n;
int a[10];

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
	for (int i = 1; i < k; i++)
	{
		if (x[i] == x[k])
			ev = false;
	}
	return ev;
}

bool solutie(int k)
{
	return(k == n);
}

void tipar()
{
	//cout << "(";
	for (int i = 1; i <= n; i++)
	{
		cout << x[i]<<", ";
	}
	//cout << x[n] << ")\n";
	cout << endl;
}

void back()
{
	int k = 1;
	init(k);
	while (k > 0);
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
	//cout << "n = ";
	//cin >> n;
	n = 3;
	
	/*for (int i = 1; i <= n; i++)
	{
		cout << "a[" << i << "] = ";
		cin >> a[i];
	}*/
	back();
	system("pause");
	return 0;
}
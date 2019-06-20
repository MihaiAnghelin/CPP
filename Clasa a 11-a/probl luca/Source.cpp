#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
	int numar, cifra;
	cout << "Numarul = ";
	cin >> numar;
	cout << "Cifra = ";
	cin >> cifra;
	bool ok = true;
	while (numar)
	{
		if (numar % 10 < cifra)
		{
			ok = false; 
			break;
		}
		numar /= 10;
	}
	if (ok == true)
		cout << "toate cifrele sunt mai mari\n";
	else
		cout << "nu toate cifrele sunt mai mari\n";
	system("pause");
	return 0;
}
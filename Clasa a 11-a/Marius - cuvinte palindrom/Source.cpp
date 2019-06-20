#define _CRT_SECURE_NO_WARNINGS
#include <fstream>
#include <cstring>

using namespace std;

int main()
{
	ifstream f("palindrom.in");
	ofstream g("palindrom.out");
	int n;
	f >> n;
	char sir[21];
	f.getline(sir, 21);
	for (int i = 1; i <= n; i++)
	{
		f.getline(sir, 21);
		char aux[21];
		strcpy(aux, sir);
		_strrev(aux);
		if (strcmp(sir, aux) == 0)
			g << 1 << endl;
		else
			g << 0 << endl;
	
	}
	f.close();
	g.close();
	return 0;
}
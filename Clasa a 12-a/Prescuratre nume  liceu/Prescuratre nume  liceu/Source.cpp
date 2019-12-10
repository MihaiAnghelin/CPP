#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <cstring>


using namespace std;

int main()
{
	char str[50];
	cout << "Introduceti numele institutiei de invatamant: \n\n";
	cin.get(str, 50);

	char* p = strtok(str, ". ");

	char t[50][10];
	int nr = -1;
	while (p)
	{	nr++;
		strcpy(t[nr], p);
		p = strtok(NULL, ". ");
	}
	char s[50];
	s[0] = NULL;

	for (int i = 0; i <= nr; i++)
	{
		if (strstr("COLEGIUL", t[i]))
		{
			strcpy(t[i], "COLEGIUL");
		}
		else if (strstr("LICEUL", t[i]))
		{
			strcpy(t[i], "LICEUL");
		}
		else if (strstr("TEORETIC", t[i]))
		{
			strcpy(t[i], "TEORETIC");
		}
		else if (strstr("NATIONAL", t[i]))
		{
			strcpy(t[i], "NATIONAL");
		}
		strcat(s, t[i]);
		strcat(s, " ");
	}
	
	cout <<"\n\nSirul obtinut este: \n\n"<< s;


}
//exemplu cu vector de stringuri
#include<cstdlib>
#include<cstdio>

int main()
{
	char strings[5][20];
	for (int i = 0; i < 5; i++)
	{
		printf("Introduceti sirul %d: ", i + 1);
		scanf_s("%s", strings[i], _countof(strings[i]));//adaptat la scanf_s
	}
	for (int i = 0; i < 5; i++)
	{
		printf("Sirul %d este %s\n", i + 1, strings[i]);
	}
	system("pause");
	return 0;
}
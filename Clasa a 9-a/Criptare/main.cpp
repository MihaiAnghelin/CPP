#include <stdio.h>
#include<fstream>
#include<string.h>

using namespace std;

int main()
{
    fstream f("Fisier.txt",ios::in);
    fstream g("Criptare.txt",ios::out);
    char linie[100];
    while(f.get(linie,100))
    {
        printf("%s %d",linie,strlen(linie));
        for (int i=0; i<strlen(linie);i++)
        {
            linie[i]++;
        }
        g<<linie;
        g.close();
    }

}

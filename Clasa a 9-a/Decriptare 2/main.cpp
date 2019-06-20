/* localtime example */
#include <stdio.h>      /* puts, printf */
#include <time.h>       /* time_t, struct tm, time, localtime */
#include<string.h>
#include<fstream>

using namespace std;

int rotdr(int x,int nr)
{
    int y=0,v[10]={0,0,0,0,0,0,0,0,0,0},p=1,d;
    for(int i=1;i<=8;i++)
    {
        v[8-i+1]=x%10;
        x/=10;
    }

    for (int i=1;i<=nr;i++)
    {
        d=v[8];
        for(int j=8;j>=2;j--)
        {
            v[j]=v[j-1];
        }
        v[1]=d;
    }

    for(int i=1;i<=8;i++)
    {
        y+=v[8-i+1]*p;
        p*=10;
    }
    return y;
}

int bazax(int n,int b)
{
    int x=0,p=1;
    while(n)
    {
        x+=n%10*p;
        n/=10;
        p*=b;
    }
    return x;
}

int baza(char c,int b)
{
    int x=0,y=1;
    while(c)
    {
        x+=(c%b)*y;
        y*=10;
        c/=b;
    }
    return x;
}

int main ()
{
    int i;
    fstream f("Criptare.txt",ios::in);
    fstream g("Decriptare.txt",ios::out);
    char linie[100],liniedec[100];
    while(f.get(linie,100))
    {
        int y=linie[0]-16;
        printf("%d\n",y);
        for (i=1; i<strlen(linie);i++)
        {
            liniedec[i-1]=(char)(bazax(rotdr(baza(linie[i],2),3),2)-y);
            printf("-%c-%d-",linie[i],linie[i]);
        }
        liniedec[i]='\0';
        g<<liniedec;
        g.close();
        printf("\n*%s*",liniedec);
    }

}

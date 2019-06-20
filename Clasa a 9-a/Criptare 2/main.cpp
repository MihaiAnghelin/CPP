/* localtime example */
#include <stdio.h>      /* puts, printf */
#include <time.h>       /* time_t, struct tm, time, localtime */
#include<string.h>
#include<fstream>

using namespace std;

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

int rotst(int x,int nr)
{
    int y=0,v[10]={0,0,0,0,0,0,0,0},p=1,d;
    for(int i=1;i<=8;i++)
    {
        v[8-i+1]=x%10;
        x/=10;
    }

    for (int i=1;i<=nr;i++)
    {
        d=v[1];
        for(int j=1;j<=7;j++)
        {
            v[j]=v[j+1];
        }
        v[8]=d;
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

int main ()
{
  time_t rawtime;
  struct tm * timeinfo;

  time (&rawtime);
  timeinfo = localtime (&rawtime);

    fstream f("Fisier.txt",ios::in);
    fstream g("Criptare.txt",ios::out);
    char linie1[100],linie2[100];


    while(f.get(linie1,100))
    {

        //printf("%s %d",linie,strlen(linie));
        printf("%s",linie1);
        for (int i=0; i<strlen(linie1);i++)
        {
            linie1[i]+=timeinfo->tm_hour;
            linie1[i]=bazax(rotst(baza(linie1[i],2),3),2);
        }



        g<<(char)(timeinfo->tm_hour+16);//ora+16

        g<<linie1;
        g.close();
    }
    printf("\n");
    fstream h("Criptare.txt",ios::in); //afisare text criptat
    h>>linie2;                         //afisare text criptat
    printf("%s",linie2);               //afisare text criptat
    h.close();




}

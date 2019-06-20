#include <stdio.h>

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



int main()
{
    char c;
    printf("c=");
    scanf("%c",&c);
    printf("%d",bazax(rotdr(rotst(baza(c,2),3),3),2));
}

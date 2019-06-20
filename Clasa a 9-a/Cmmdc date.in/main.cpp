#include <stdio.h>
#include <fstream>

using namespace std;

int cmmdc(int c, int d)
{
    while(c!=d)
    {
        if(c>d)
        {
            c-=d;
        }
        else
        {
            d-=c;
        }
    }
    return c;
}

int main()
{
    unsigned int i=1,n=1,a[100],x,r;
//citirea din fisier
    fstream f("date.in",ios::in);
    f>>x;a[1]=x;n=2;
    while(a[n-1])
    {
        f>>x;
        a[n++]=x;
    }
    n-=2;
    f.close();
    printf("%d\n",n);
    for(i=1;i<=n;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n\n");
//cmmdc
    x=a[1];
    for(i=1;i<=n;i++)
    {
        r=cmmdc(x,a[i]);
        x=r;
    }
    printf("%d",r);
}

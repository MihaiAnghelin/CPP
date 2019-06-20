#include <stdio.h>

int prim(int x)
{
    int f,i;
    f=1;
    for(i=2;i<x;i++)
    {
        if(x%i==0)
        {
            f=0;
        }
    }
    return f;
}
int main()
{
    int n,m,p,a[10000],i;
    printf("Introduceti N:");
    scanf("%d",&n);
    m=n;
    p=2;
    for (i=1;i<=9999;i++)
    {
        a[i]=0;
    }
    while (m!=1)
    {
        while (m%p==0)
        {
            a[p]++;
            m/=p;
        }
        do
        {
            p++;
        }
        while (!prim(p));
    }
    printf("%d",n);
    for (i=1;i<=n;i++)
    {
        if(a[i])
        {
            if (m==1)
            {
                printf("=");
                m=0;
            }
            else
            {
                printf("+");
            }
            printf("%d^%d",i,a[i]);
        }
    }
}

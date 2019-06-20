#include <stdio.h>

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
    int a[100],n,m;
    printf("Numarul numerelor este:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        printf("A[%d]=",i);
        scanf("%d",&a[i]);
    }
    m=a[1];
    for(int i=1;i<n;i++)
    {
        m=cmmdc(m,a[i+1]);
    }
    printf("CMMDC=%d",m);
}

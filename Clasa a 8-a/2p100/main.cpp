#include <stdio.h>

int main()
{
    int a[1001],n,i,y,j,x;
    printf("Introduceti n:");
    scanf("%d",&n);
    for(i=1;i<=1000;i++)
    {
        a[i]=0;
    }
    a[1000]=1;

    for(i=1;i<=n;i++)
    {
        for(j=1;j<=1000;j++)
        {
            a[j]*=2;
        }
        for(j=1000;j>1;j--)
        {
            if(a[j]>=10)
            {
                a[j]-=10;
                a[j-1]++;
            }
        }
    }

    y=0;x=0;
    for(i=1;i<=1000;i++)
    {
        if (a[i]!=0) {y=1;}
        if (y==1) {printf("%d",a[i]);x++;}
    }
    printf("\nNr. cifre:%d",x);
}

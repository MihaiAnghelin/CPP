#include <stdio.h>

int main()
{
    int a[100],i=2,n,x=0,f=0;
    printf("Citeste N:");
    scanf("%d",&n);
    a[0]=0;a[1]=1;
    while(x<=n)
    {
        a[i]=a[i-1]+a[i-2];
        x=a[i];
        i++;
    }

    for (int j=0;j<i;j++)
    {
        if(n==a[j])
        {
            f=1;
        }
    }
    if(f==1)
    {
        printf("DA!!!:D");
    }
    else
    {
        printf("NU :(");
    }
}

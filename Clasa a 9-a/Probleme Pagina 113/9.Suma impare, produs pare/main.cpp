#include <stdio.h>

int main()
{
    int a[100],i=1,n=1,produs=1,suma=0;
    printf("a[1]= ");
    scanf("%d",&a[1]);
    while(a[n]!=0)
    {
        n++;
        printf("a[%d]= ",n);
        scanf("%d",&a[n]);
    }
    n-=1;
    printf("\n\ni=%d\n\n",n);
    for(i=1;i<=n;i++)
    {
        if(i%2==0)
        {
            produs*=a[i];
        }
        else
        {
            suma+=a[i];
        }
    }

    printf("\nSuma=%d\nProdus=%d",suma,produs);
}

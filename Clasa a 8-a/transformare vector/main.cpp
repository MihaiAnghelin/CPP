#include <stdio.h>

int main()
{
    int n,a[10],y,m,q=0,i;
    printf("Inroduceti numarul:");
    scanf("%d",&n);
    m=n;
    do
    {
        m/=10;
        q++;
    }while (m);
    printf("Numar cifre=%d",q);
    for(i=q;i>=1;i--)
    {
        a[i]=n%10;
        n/=10;
    }
    printf("\n");
    for(i=1;i<=q;i++)
    {
        printf("%d",a[i]);
    }
}

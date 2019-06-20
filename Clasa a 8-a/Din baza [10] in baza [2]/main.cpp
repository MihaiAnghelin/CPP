#include <stdio.h>

int main()
{
    int n,a[50],indice=1;
    printf("N= ");
    scanf("%d",&n);
    while(n!=0)
    {
        a[indice++]=n%2;
        n/=2;
    }
    printf("%d\n",indice);
    for(int i=indice-1;i>=1;i--)
    {
        printf("%d",a[i]);
    }
}

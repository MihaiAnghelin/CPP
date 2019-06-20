#include <stdio.h>

int main()
{
    int n,s=0,i;
    printf("Introduceti N: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        s+=i;
    }
    printf("Suma este: %d",s);
}

#include <stdio.h>

int main()
{
    int n,m=0;
    printf("Introduceti N:");
    scanf("%d",&n);
    while(n>0)
    {
        m*=10;
        m+=n%10;
        n/=10;
    }
    printf("%d",m);
}

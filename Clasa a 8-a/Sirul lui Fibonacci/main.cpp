#include <stdio.h>

int main()
{
    long a[100],n;
    printf("Introduceti N:");
    scanf("%d",&n);
    a[0]=0;
    a[1]=1;
    for(int i=2;i<n;i++)
    {
        a[i]=a[i-2]+a[i-1];
    }
    for(int i=0;i<n;i++)
    {
        printf("%d(%d) ",a[i],i);
    }
}

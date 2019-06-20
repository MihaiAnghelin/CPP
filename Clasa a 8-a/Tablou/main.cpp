#include <stdio.h>

int main()
{
    int a[20],i;
    for(i=1;i<=4;i++)
    {
        printf("Introduceti A[%d]:",i);
        scanf("%d",&a[i]);
    }
    for(i=1;i<=4;i++)
    {
        printf("%d ",a[i]);
    }
}

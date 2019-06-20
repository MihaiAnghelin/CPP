#include <stdio.h>

int main()
{
    int n,a[100],i,x;
    printf("Citeste numarul numerelor:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("a[%d]= ",i);
        scanf("%d",&a[i]);
    }
    x=a[1];
    for(i=2;i<=n;i++)
    {
        if(x>a[i])
        {
            x=a[i+1];
        }
    }
    printf("Cel mai mic numar este %d",x);
}

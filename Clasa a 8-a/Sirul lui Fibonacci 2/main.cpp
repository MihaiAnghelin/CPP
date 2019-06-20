#include <stdio.h>

int main()
{
    int a,b,n,i;
    printf("Introduceti N:");
    scanf("%d",&n);
    a=0;
    b=1;
    for(i=1;i<=n;i++)
    {
        if(a<b)
        {
            a+=b;
            printf("%d ",a);
        }
        else
        {
            b+=a;
            printf("%d ",b);
        }
    }
}

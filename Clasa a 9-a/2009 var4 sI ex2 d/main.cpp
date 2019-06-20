#include <stdio.h>

int main()
{
    int a,b,x;
    printf("a = ");scanf("%d",&a);
    printf("b = ");scanf("%d",&b);
    if(a < b)
    {
        a=a+b;
        b=a-b;
        a=a-b;
    }
    for(x=a;x>=b;x--)
    {
        if(x%2!=0)
        {
            printf("%d ",x);
        }
    }
}

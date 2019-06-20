#include <stdio.h>

int main()
{
    int a,b,c,d,e,x;
    printf("Introduceti A: ");
    scanf("%d",&a);
    printf("Introduceti B: ");
    scanf("%d",&b);
    printf("Introduceti C: ");
    scanf("%d",&c);
    printf("Introduceti D: ");
    scanf("%d",&d);
    printf("Introduceti E: ");
    scanf("%d",&e);
    if(a>b)
    {
        x=a;
    }
    else
    {
        x=b;
    }
    if(x>c)
    {
    }
    else
    {
        x=c;
    }
    if(x>d)
    {
    }
    else
    {
        x=d;
    }
    if(x>e)
    {
        printf("Cel mai mare nr este: %d",x);
    }
    else
    {
        printf("Cel mai mare nr este: %d",e);
    }

}

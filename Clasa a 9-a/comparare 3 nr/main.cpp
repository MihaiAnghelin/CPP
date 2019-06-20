#include <stdio.h>

int main()
{
    int a,b,c,x;
    printf("Introduceti A: ");
    scanf("%d",&a);
    printf("Introduceti B: ");
    scanf("%d",&b);
    printf("Introduceti C: ");
    scanf("%d",&c);
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
        printf("Cel mai mare nr este: %d",x);
    }
    else
    {
        printf("Cel mai mare nr este: %d",c);
    }
}

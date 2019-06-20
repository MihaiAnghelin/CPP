#include <stdio.h>

int main()
{
    float a,b,c,f;
    f=1;
    printf("Introduceti A: ");
    scanf("%d",&a);
    printf("Introduceti B: ");
    scanf("%d",&b);
    printf("Introduceti C: ");
    scanf("%d",&c);
    if(a<b+c)
    {
    }
    else
    {
        f=0;
    }
    if(b<a+c)
    {
    }
    else
    {
        f=0;
    }
    if(c<b+a)
    {
    }
    else
    {
        f=0;
    }
    if(f==1)
    {
        printf("Valorile pot fi laturile triunghiului");
    }
    else
    {
        printf("Valorile nu pot fi laturile triunghiului");
    }
}

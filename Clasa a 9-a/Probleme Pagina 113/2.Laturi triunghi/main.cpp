#include <stdio.h>

int main()
{
    int a,b,c;
    printf("Introduceti A: ");
    scanf("%d",&a);
    printf("Introduceti B: ");
    scanf("%d",&b);
    printf("Introduceti C: ");
    scanf("%d",&c);
    if(a+b>c)
    {
        printf("Pot fi laturile unui triunghi");
    }
    else
    {
        printf("Nu pot fi laturile unui triunghi");
    }
}

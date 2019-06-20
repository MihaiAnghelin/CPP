#include <stdio.h>
#include <math.h>

int main()
{
    int a,b,c;
    float x1,x2;
    printf("Pentru ax^2+bx+c=0, se vor calcula valorile lui x\n");
    printf("Introduceti a: ");
    scanf("%d",&a);
    printf("Introduceti b: ");
    scanf("%d",&b);
    printf("Introduceti c: ");
    scanf("%d",&c);
    x1=(-b+ sqrt(b*b-4*a*c))/(2*a);
    x2=(-b- sqrt(b*b-4*a*c))/(2*a);
    printf("x1=%.2f\nx2=%.2f",x1,x2);
}

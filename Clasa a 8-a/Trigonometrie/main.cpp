#include <stdio.h>
#include <math.h>

int main()
{
    int a;
    float c,b;
    printf("Introduceti a:");
    scanf("%d",&a);
    c=sin(a*M_PI/180);
    printf("Sin=%.2f\n",c);
    printf("Sin^2=%.2f\n",c*c);
    b=cos(a*M_PI/180);
    printf("Cos=%.2f\n",b);
    printf("Cos^2=%.2f\n\n",b*b);
    printf("Sin^2+Cos^2=1\n");
}

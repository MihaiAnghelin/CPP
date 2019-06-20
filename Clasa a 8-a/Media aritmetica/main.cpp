#include <stdio.h>


int main()
{

    int a,i;
    double x,s;
    s=0;
    i=0;
    do
    {
        printf("Introduceti numarul:");
        scanf("%d",&a);
        s+=a;
        i++;
    }
    while(a!=0);
    if(i>=2)
    {
        i--;
        printf("Media aritmetica a numerelor este: %5.2f %5.0f %d",s/i,s,i);
    }
    else
    {
        printf("Nu se poate.");
    }
}

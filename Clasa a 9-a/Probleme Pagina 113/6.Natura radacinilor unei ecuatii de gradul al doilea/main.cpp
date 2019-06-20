#include <stdio.h>

int main()
{
    int a,b,c,delta,P,S;
    printf("Introduceti A: ");
    scanf("%d",&a);
    printf("Introduceti B: ");
    scanf("%d",&b);
    printf("Introduceti C: ");
    scanf("%d",&c);

    delta=b*b-4*a*c;

    P= -b/a;

    S= c/a;

    if(P>0)
    {
        if(S>0)
        {
            if(delta<0)
            {
                printf("Ecuatia nu are radacini reale.\nAmbele radacini sunt pozitive.");
            }
            else
            {
                printf("Ecuatia are radacini reale.\nAmbele radacini sunt pozitive.");
            }
        }
        else
        {
            if(delta<0)
            {
                printf("Ecuatia nu are radacini reale.\nAmbele radacini sunt negative.");
            }
            else
            {
                printf("Ecuatia are radacini reale.\nAmbele radacini sunt negative.");
            }
        }
    }
    else
    {
        if(delta<0)
            {
                printf("Ecuatia nu are radacini reale.\nRadacinile au semne contrare.");
            }
            else
            {
                printf("Ecuatia are radacini reale.\nRadacinile au semne contrare.");
            }
    }

}

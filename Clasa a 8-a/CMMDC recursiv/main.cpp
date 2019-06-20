#include <stdio.h>

int CMMDC (int a,int b)
{
    if (a==b)
    {
        return a;
    }
    else if (a>b)
    {
        return CMMDC(a-b,b);
    }
    else
    {
        return CMMDC(a,b-a);
    }
}

int main()
{
    int m=10,n=15;
 /*   printf("Citeste M:");
    scanf("%d",&m);
    printf("Citeste N:");
    scanf("%d",&n);*/
    printf("%d",CMMDC(m,n));
}

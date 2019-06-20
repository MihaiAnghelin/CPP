#include <stdio.h>

int patrat(int x)
{
    return x*x;
}

float f(int x)
{
    return 2*x+1;
}

int main()
{
    int n;
    printf("N=");
    scanf("%d",&n);
    printf("%d^2=%d",n,patrat(n));
    printf("\nf(%d)=%f",0,f(0));
}

#include <stdio.h>

int fiboacci(int n)
{
    if(n==1)
    {
        return 0;
    }
    else if (n==2)
    {
        return 1;
    }
    else
    {
        return fiboacci(n-1)+fiboacci(n-2);
    }
}

int main()
{
    int n;
    printf("INtroduceti N:");
    scanf("%d",&n);
    printf("\n\%d",fiboacci(n));
}

#include <stdio.h>

int factorial (int x)
{
    if(x==1)
    {
        return 1;
    }
    else
    {
        return x*factorial(x-1);
    }
}

int main()
{
    printf("%d",factorial(5));
}

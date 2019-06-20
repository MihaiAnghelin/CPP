#include <stdio.h>

int prim(int x)
{
    int f,i;
    f=1;
    for(i=2;i<x;i++)
    {
        if(x%i==0)
        {
            f=0;
        }
    }
    return f;
}
int main()
{
    for(int i=2;i<=1000;i++)
    {
        if (prim(i))
        {
            printf("%d\t",i);
        }
    }
}

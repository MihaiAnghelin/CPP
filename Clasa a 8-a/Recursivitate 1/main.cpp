#include <stdio.h>

int afis(int x)
{
    if (x==31)
    {
    }
    else
    {
        printf("%d\n",x);
        afis(x+1);
    }
}

int main()
{
     afis(10);
}

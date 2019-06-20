#include <stdio.h>

int suma (int x)
{
    if(!x)
    {
        return 0;
    }
    else
    {
        return x+suma(x-1);
    }
}

int main()
{
    printf("%d",suma(5));
}

#include <stdio.h>

int main()
{
    int a;
    printf("Introduceti un numar: ");
    scanf("%d",&a);
    if(a>=0)
    {
        printf("Numarul este pozitiv.");
    }
    else
    {
        printf("Numarul este negativ.");
    }
}

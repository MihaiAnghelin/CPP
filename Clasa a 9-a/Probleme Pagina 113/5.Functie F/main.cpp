#include <stdio.h>

int main()
{
    int x;
    printf("Citeste x: ");
    scanf("%d",&x);
    if (x<5)
    {
        printf("%d",x*x-3);
    }
    else
    {
        if(x<=25)
        {
            printf("%d",x+1);
        }
        else
        {
            printf("%d",x*x-5*x+6);
        }
    }

}

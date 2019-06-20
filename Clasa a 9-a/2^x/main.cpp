#include <stdio.h>

int main()
{
    int x=30,i,y=1;
    printf("Citeste puterea lui 2:");
    //scanf("%d",&x);
    for(i=1;i<=x;i++)
    {
        y*=2;
    }
    printf("2^%d=%d",x,y);


}

#include <stdio.h>

int main()
{
    int a[4],i,j;

    //citire
    for(i=1;i<=4;i++)
    {
        printf("Citeste a[%d]: ",i);
        scanf("%d",&a[i]);
    }

    //sortare
    for (j=1;j<=3;j++)
    {
        for( i=1;i<4;i++)
        {
            if(a[i]>a[i+1])
            {
                a[i]=a[i]+a[i+1];
                a[i+1]=a[i]-a[i+1];
                a[i]=a[i]-a[i+1];
            }
        }
    }


    //afisare
    printf("\n");
    for(int i=1;i<=4;i++)
    {
        printf("a[%d]=%d\n",i,a[i]);
    }
}

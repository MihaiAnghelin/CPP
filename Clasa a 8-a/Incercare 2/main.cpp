#include <stdio.h>

int main()
{
    int a[100];
    for(int i=1;i<=10;i++)
    {
        printf("A[%d]=",i);
        scanf("%d",&a[i]);
    }
    for(int i=1;i<=10;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
    int x=a[1],y=a[1],z=a[1];
    for(int i=2;i<=10;i++)
    {
        if(x<a[i])
        {
            x=a[i];
        }
        if(a[i]<y)
        {
            y=a[i];
        }
        z+=a[i];
   }
    printf("Max= %d",x);
    printf("\n");
    printf("Min= %d",y);
    printf("\n");
    printf("%.2f",z/10.0);
}

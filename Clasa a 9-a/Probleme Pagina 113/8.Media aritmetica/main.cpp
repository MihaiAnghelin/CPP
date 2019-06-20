#include <stdio.h>

int main()
{
    int a[100],i=1,n;
    float suma=0;
    printf("a[1]= ");
    scanf("%d",&a[1]);
    while(a[i]!=0)
    {
        i++;
        printf("a[%d]= ",i);
        scanf("%d",&a[i]);
    }
    i-=1;
    n=i;

//    for(i=1;i<=n;i++)
  //  {
    //    printf("a[%d]=%d\n",i,a[i]);
//
  //  }
    //printf("\n%d",i);

    for(i=1;i<=n;i++)
    {
        suma+=a[i];
    }
//    printf("%d",suma);
    suma/=n;
    printf("Media= %f",suma);
}

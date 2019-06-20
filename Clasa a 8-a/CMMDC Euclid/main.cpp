#include <stdio.h>

int cmmdc(int c, int d)
{
    while(c!=d)
    {
        if(c>d)
        {
            c-=d;
        }
        else
        {
            d-=c;
        }
    }
    return c;
}

int cmmmc(int m, int n)
{
    int x;
    x=m*n/cmmdc(m,n);
    return x;
}

int main()
{
    int a,b;
    printf("Introduceti A:");
    scanf("%d",&a);
    printf("Introduceti B:");
    scanf("%d",&b);

    printf("CMMDC=%d",cmmdc(a,b));
    //printf("\nCMMDC(10,20)=%d",cmmdc(10,20));
   //printf("\nCMMDC(30,45)=%d",cmmdc(30,45));
   // printf("\nCMMDC=%d",cmmdc(a,b));
  //  printf("\nCMMMC=%d",cmmmc(a,b));

}

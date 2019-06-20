#include <stdio.h>

int putere(int a,int b)
{
    int m=a;
    for(int i=1;i<b;i++)
   {
       a*=m;
   }
   return a;
}

int main()
{
    int c,d;
    printf("Introduceti a:");
    scanf("%d",&c);
    printf("Introduceti b:");
    scanf("%d",&d);

    printf("a^b=%d",putere(c,d));
    printf("\nb^a=%d",putere(d,c));
}

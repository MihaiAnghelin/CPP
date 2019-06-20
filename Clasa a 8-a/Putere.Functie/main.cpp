#include <stdio.h>

int putere(int a,int b)
{
    for(int i=1;i<=b;i++)
   {
       a*=a;
   }
   return a;
}

int putere2(int o,int q)
{
    for (int i=1;i<=o;i++)
    {
        q*=q;
    }
    return q;
}

int main()
{
    int c,d;
    printf("Introduceti a:");
    scanf("%d",&c);
    printf("Introduceti b:");
    scanf("%d",&d);

    printf("a^b=%d",putere(c,d));
    printf("\nb^a=%d",putere2(d,c));
}

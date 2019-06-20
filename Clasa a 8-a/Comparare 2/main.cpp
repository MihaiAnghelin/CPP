#include <stdio.h>

int main()
{
   int a,b,c,d,e,x;
   printf("Introduceti A: ");
   scanf("%d",&a);
   printf("Introduceti B: ");
   scanf("%d",&b);
   printf("Introduceti C: ");
   scanf("%d",&c);
   printf("Introduceti D: ");
   scanf("%d",&d);
   printf("Introduceti E: ");
   scanf("%d",&e);
   if(a>b)
   {
       x=a;
   }
   else
   {
       x=b;
   }
   if(x<c)
   {
       x=c;
   }
   if(x<d)
   {
       x=d;
   }
   if(x>e)
   {
      printf("%d este cel mai mare",x);
   }
   else
   {
       printf("%d este cel mai mare",e);
   }
}

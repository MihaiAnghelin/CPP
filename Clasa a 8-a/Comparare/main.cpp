#include <stdio.h>

int main()
{
   int a,b,c,d,e;
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
       if(a>c)
       {
            if(a>d)
            {
                 if(a>e)
                 {
                     printf("A este cel mai mare");
                 }
                 else
                 {
                     printf("E este cel mai mare");
                 }
            }
            else
            {
                 if(d>e)
                 {
                     printf("D este cel mai mare");
                 }
                 else
                 {
                     printf("E este cel mai mare");
                 }
           }
       }
       else
       {
             if(c>d)
            {
                 if(c>e)
                 {
                     printf("C este cel mai mare");
                 }
                 else
                 {
                     printf("E este cel mai mare");
                 }
            }
            else
            {
                 if(d>e)
                 {
                     printf("D este cel mai mare");
                 }
                 else
                 {
                     printf("E este cel mai mare");
                 }
           }

       }

   }
   else
   {
       if(b>c)
       {
            if(b>d)
            {
                 if(b>e)
                 {
                     printf("B este cel mai mare");
                 }
                 else
                 {
                     printf("E este cel mai mare");
                 }
            }
            else
            {
                 if(d>e)
                 {
                     printf("D este cel mai mare");
                 }
                 else
                 {
                     printf("E este cel mai mare");
                 }
           }
       }
       else
       {
             if(c>d)
            {
                 if(c>e)
                 {
                     printf("C este cel mai mare");
                 }
                 else
                 {
                     printf("E este cel mai mare");
                 }
            }
            else
            {
                 if(d>e)
                 {
                     printf("D este cel mai mare");
                 }
                 else
                 {
                     printf("E este cel mai mare");
                 }
           }

       }
   }
}

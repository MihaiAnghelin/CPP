#include <stdio.h>

int main()
{
  int a,b;
  printf("Introduceti A: ");
  scanf("%d",&a);
  printf("Introduceti B: ");
  scanf("%d",&b);
  printf("A=%d\tB=%d\n",a,b);
  a=a+b;
  b=a-b;
  a=a-b;
  printf("A=%d\tB=%d",a,b);
}

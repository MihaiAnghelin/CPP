#include <stdio.h>
#include <string.h>

int main()
{
  char nume[50];
  char prenume[50];
  char x[100]="";
  printf("Introduceti numele:");
  scanf("%s",nume);
  printf("Introduceti prenumele:");
  scanf("%s",prenume);
  strcat(x,nume);
  strcat(x," ");
  strcat(x,prenume);
  printf("%s",x);

}

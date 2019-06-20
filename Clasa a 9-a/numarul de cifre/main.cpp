#include <string.h>
#include <stdio.h>

int main()
{
    int i,x=0,p=1,ok,l=0;
    char a[10],b[10],c;
    printf("Citeste a:");
    scanf("%s",&a);
    i=strlen(a)-1;
    while (i>=0)
    {
      ok=0;
      if ((a[i]>=65)&&(a[i]<=70)) {x+=(a[i]-55)*p;ok=1;}
      else if ((a[i]>=97)&&(a[i]<=102)) {x+=(a[i]-87)*p;ok=1;}
      else if ((a[i]>=48)&&(a[i]<=57)) {x+=(a[i]-48)*p;ok=1;}
      if (ok)
      {
        p*=16;
        b[l++]=a[i];
      }
      i--;
    }
    b[l]='\0';
    for(i=0;i<l/2;i++)
    {
        c=b[i];
        b[i]=b[l-i-1];
        b[l-i-1]=c;
    }
    printf("Numarul de convertit: %s\nValoare in baza 10:%d",b,x);
}

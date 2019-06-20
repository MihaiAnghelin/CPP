#include <stdio.h>

int main()
{
    int a[14],b[14],i,s=0;
    a[1]=2;a[2]=7;a[3]=9;a[4]=1;a[5]=4;a[6]=6;a[7]=3;a[8]=5;a[9]=8;a[10]=2;a[11]=7;a[12]=9;a[13]=0;
    for(i=1;i<=13;i++)
    {
        do
        {
            printf("Introduceti CNP[%d]:",i);
            scanf("%d",&b[i]);
        }
        while(b[i]>=10);
    }
    for(i=1;i<=13;i++)
    {
        s+=a[i]*b[i];
    }
    s%=11;
    if (s==10) {s=1;}
    if (s==b[13])
    {
        printf("CNP valid");
    }
    else
    {
        printf("CNP invalid");
    }
}

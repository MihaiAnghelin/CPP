#include <stdio.h>

int main()
{
    int a,b,i,mini,cmmdc,v[100],indice=1;
    printf("Introduceti A:");
    scanf("%d",&a);
    printf("Introduceti B:");
    scanf("%d",&b);
    if(a>b)
    {
        mini=b;
    }
    else
    {
        mini=a;
    }
    for(i=1;i<=mini;i++)
    {
        if((a%i==0)&&(b%i==0))
        {
            cmmdc=i;
            v[indice++]=i;
        }
    }
    for(i=1;i<indice;i++)
    {
        printf(" %d(%d)",v[i],i);
    }
    printf("\nCMMDC=%d",cmmdc);
}

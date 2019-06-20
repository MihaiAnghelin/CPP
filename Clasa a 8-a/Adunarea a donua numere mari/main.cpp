#include <stdio.h>

int main()
{
    int a[101],b[101],c,d,i,x,y,e[101],n;
    printf("Introduceti numarul de cifre pentru primul numar:");
    scanf("%d",&c);
    printf("Introduceti numarul de cifre pentru al doilea numar:");
    scanf("%d",&d);

    //se initializeaza vectorii cu 0 peste tot
    for(i=1;i<=100;i++)
    {
        a[i]=0;
    }
    for(i=1;i<=100;i++)
    {
        b[i]=0;
    }
    for(i=1;i<=100;i++)
    {
        e[i]=0;
    }

    // se citesc vectorii a si b
    for(i=100-c+1;i<=100;i++)
    {
        printf("a[%d]=",i);
        scanf("%d",&a[i]);
    }
    for(i=100-d+1;i<=100;i++)
    {
        printf("b[%d]=",i);
        scanf("%d",&b[i]);
    }
    // se calculeaza suma a+b in vectorul e
    if(c>d){n=100-c;}
    else{n=100-d;}
    for(i=100;i>=n;i--)
    {
        e[i]=a[i]+b[i];
    }
    for(i=100;i>=n;i--)
    {
        if(e[i]>9)
        {
            e[i]%=10;
            e[i-1]++;
        }
    }
    // se afiseaza vectorii
     y=0;x=0;
    for(i=1;i<=100;i++)
    {
        if (a[i]!=0) {y=1;}
        if (y==1) {printf("%d",a[i]);x++;}
    }
    printf(" + ");
    y=0;x=0;
     for(i=1;i<=100;i++)
    {
        if (b[i]!=0) {y=1;}
        if (y==1) {printf("%d",b[i]);x++;}
    }
    printf(" = ");
    y=0;x=0;
     for(i=1;i<=100;i++)
    {
        if (e[i]!=0) {y=1;}
        if (y==1) {printf("%d",e[i]);x++;}
    }
}

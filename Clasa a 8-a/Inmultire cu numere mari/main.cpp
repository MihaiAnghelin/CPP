#include <stdio.h>

int main()
{
    int a[21],b[21],c[401],i,j,t[21][401],m,n,f;
    for(i=1;i<=20;i++)
    {
        a[i]=0;
        b[i]=0;
    }
    for (i=1;i<=400;i++)
    {
        c[i]=0;
    }
    for (i=1;i<=20;i++)
    {
        for (j=1;j<=400;j++)
        {
            t[i][j]=0;
        }
    }
    printf("Introduceti numaruld de cifre pt. cele 2 numere M si N\n");
    printf("N=");
    scanf("%d",&n);
    printf("M=");
    scanf("%d",&m);
    for(i=1;i<=n;i++)
    {
        printf("a[%d]=",20-n+i);
        scanf("%d",&a[20-n+i]);
    }
    for(i=1;i<=m;i++)
    {
        printf("b[%d]=",20-m+i);
        scanf("%d",&b[20-m+i]);
    }

//calcul
    for(i=1;i<=m;i++)
    {
        for (j=1;j<=20;j++)
        {
            t[i][400-i+1-j+1]=a[20-j+1]*b[20-i+1];
        }
    }

    for(i=1;i<=m;i++)
    {
        for (j=1;j<=20;j++)
        {
            if (t[i][400-i+1-j+1]>10)
            {
                t[i][400-i+1-j+1]-=10;
                t[i][400-i+1-j]++;
            }
        }
    }

// rezultat c
    for(i=1;i<=m;i++)
    {
        for (j=1;j<=400;j++)
        {
            c[j]+=t[i][j];
        }
    }

    for (i=1;i<=400;i++)
    {
       if (c[400-i+1]>10)
       {
           c[400-i+1]-=10;
           c[400-i]++;
       }
    }


// Afisare rezultat
    f=0;
    for(i=1;i<=400;i++)
    {
        if (!f&&c[i])
        {
            f=1;
        }
        if (f)
        {
            printf("%d",c[i]);
        }
    }
    printf("\n");
}

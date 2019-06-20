#include <stdio.h>

int main()
{
    int a,b,n[105],i,j=1,prim[20],aprim[26],bprim[26];

    //citirea numerelor
    printf("Citeste A:");scanf("%d",&a);
    printf("Citeste B:");scanf("%d",&b);

    //numerele de la 2 la 100
    for(i=2;i<=100;i++)
    {
        n[i]=i;
    }

    //numerele prime dupa ciurul lui eratostene
    for(i=2;i<=100;i++)
    {
        if(n[i]==2||n[i]==3||n[i]==5||n[i]==7)
        {
            prim[j]=n[i];
            j++;
        }
        else
        {
            if(n[i]%2!=0&&n[i]%3!=0&&n[i]%5!=0&&n[i]%7!=0)
            {
                prim[j]=n[i];
                j++;
            }
        }
    }

    //afisare siruri de numere
    for(i=2;i<=100;i++)
    {
        printf("%d  ",n[i]);
    }
    printf("\n\n\n");
     for(i=1;i<=j-1;i++)
    {
        printf("%d  ",prim[i]);
    }

    //factorii primi
    for(i=1;i<=j-1;i++)
    {
        aprim[i]=0;
        bprim[i]=0;
    }
    //impartirea in factori primi
    i=1;
    while(a!=0)
    {
        if(a%prim[i]==0)
        {
            aprim[i]*=prim[i];
            a/=prim[i];
        }
        else
        {
            i++;
        }
    }


}

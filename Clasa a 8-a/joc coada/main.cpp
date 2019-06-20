#include <stdio.h>

void meniu()
{
    printf("1. Adaugare element\n");
    printf("2. Eleminare element\n");
    printf("3. Afiseaza coada\n");
    printf("4. Iesire\n");
    printf("Alegeti optiunea dvs.:");
}

void adaugare(int &li,int &ls,int v[100])
{
    printf("a[%d]=",++ls);
    scanf("%d",&v[ls]);
}

void eliminare(int &li,int ls)
{
    if (li<ls)
    {
        li++;
    }
    else
    {
        printf("NU poti sterge ultimul element\n");
    }
}
void afisare(int li,int ls,int a[100])
{
    for(int i=li;i<=ls;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
}
int main()
{
    int a[1000],n,li,ls;
    printf("N=");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        printf("a[%d]=",i);
        scanf("%d",&a[i]);
    }
    li=1;
    ls=n;
    do
    {
        meniu();
        scanf("%d",&n);
        if (n==1) {adaugare(li,ls,a);}
        else if (n==2) {eliminare(li,ls);}
        else if (n==3) {afisare(li,ls,a);}
        else if (n!=4) {printf("Cititi mai bine meniul!!!\n");}
    }while(n!=4);
}

#include <stdio.h>

int a[100],n;

void citeste()
{
    for(int i=1;i<=n;i++)
    {
        printf("a[%d]=",i);
        scanf("%d",&a[i]);
    }
}
void afiseaza()
{
    printf("\n");
    for(int i=1;i<=n;i++)
    {
        printf("a[%d]=%d\n",i,a[i]);
    }
}
void sortare()
{
    int aux;
    for (int j=1;j<=n;j++)
    {
        for(int i=1;i<=n-j;i++)
        {
            if(a[i]>a[i+1])
            {
                aux=a[i+1];
                a[i+1]=a[i];
                a[i]=aux;
            }
        }
    }
}

int main()
{
//    printf("Introduceti N:");
//    scanf("%d",&n);
//    citeste();
     n=4;
    // for(int i=7;i>=1;i--)
      //  {a[i]=i;}
    a[1]=7;a[2]=6;a[3]=5;a[4]=4;a[5]=3;a[6]=2;a[7]=1;
    afiseaza();
    sortare();
    afiseaza();

}

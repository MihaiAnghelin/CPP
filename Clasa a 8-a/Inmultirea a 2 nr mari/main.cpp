#include <stdio.h>

int main()
{
    int a[10],b[10],m,n,p,q,i=1,j=1;
    printf("Intoduceti primul numar:");
    scanf("%d",&m);
    printf("Introduceti al doilea numar:");
    scanf("%d",&n);
    p=m;
    while(!p==0)
    {
        p/=10;
        i++;
    }
    i--;
    q=n;
    while(!q==0)
    {
        q/=10;
        j++;
    }
    j--;

}

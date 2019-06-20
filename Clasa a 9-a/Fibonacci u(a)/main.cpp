#include <stdio.h>

int uu(int n)
{
    if(n<=2)
    {
        return 1;
    }
    else
    {
        return (uu(n-2)+ uu(n-1));
    }
}
int main()
{
    int u[100],a;
    printf("Introduceti a(pozitiv, mai mic decat 47) :");
    scanf("%d",&a);
    printf("u(a)=%d",uu(a));
}

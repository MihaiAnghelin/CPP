#include <stdio.h>

using namespace std;

int main()
{
    int a,b,c;
    printf("Introduceti A:");
    scanf("%d",&a);
    printf("Introduceti B:");
    scanf("%d",&b);
    printf("Introduceti C:");
    scanf("%d",&c);
    if(a>b)
    {
        if(a>c)
        {
            printf("%d",a);
        }
        else
        {
            printf("%d",c);
        }
    }
    else
    {
        if(b>c)
        {
            printf("%d",b);
        }
        else
        {
            printf("%d",c);
        }
    }
    printf("\n%d %d %d",a,b,c);
}

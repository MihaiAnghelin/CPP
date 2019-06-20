#include <stdio.h>

int main()
{
    int a,b,c,gen=0,x;
    printf("Numarul bacteriilor de tip a este: ");
    scanf("%d",&a);
    printf("Numarul bacteriilor de tip b este: ");
    scanf("%d",&b);
    printf("Numarul bacteriilor de tip c este: ");
    scanf("%d",&c);
    while(a>=2&&b>=3&&c!=0)
    {
        a-=2;
        b-=3;
        a++;b++;c++;
        c/=2;
        gen++;
    }
    printf("%d",gen);
}

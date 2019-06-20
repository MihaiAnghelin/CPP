#include <stdio.h>

using namespace std;

int main()
{
    int x,a,b,r;
    do
    {
        printf("\n1.Suma a 2 nr:\n");
        printf("2.Inmultirea a 2 nr:\n");
        printf("3.a^b:\n");
        printf("Alegeti optiunea ");
        scanf("%d",&x);
        if(x>=1&&x<=3)
        {
            printf("Introduceti A:");
            scanf("%d",&a);
            printf("Introduceti B:");
            scanf("%d",&b);
            switch(x)
            {
                case 1:
                    r=a+b;
                    break;
                case 2:
                    r=a*b;
                    break;
                case 3:
                    r=1;
                    for(int i=1;i<=b;i++)
                    {
                        r*=a;
                    }
                    break;

            }
        printf("Rezultatul este:%d",r);
        }
    }while(x);
}

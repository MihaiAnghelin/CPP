#include <stdio.h>

int main()
{
    int a[100001],b[100001],n,i,j,x,y;
    printf("Introduceti N:");
    scanf("%d",&n);
    for(i=1;i<=10000;i++)
    {
        a[i]=0;
    }
    for(i=1;i<=10000;i++)
    {
        b[i]=0;
    }
    b[10000]=1;
    for(i=1;i<=n;i++)
    {
        if((i%2)==1)
        {
            for(j=10000;j>=2;j--)
            {
                a[j]+=b[j];
            }
            for(j=10000;j>=2;j--)
            {
                if(a[j]>9)
                {
                    a[j]%=10;
                    a[j-1]++;
                }
            }
            y=0;x=0;
            for(j=1;j<=10000;j++)
            {
                if (a[j]!=0) {y=1;}
                if (y==1) {printf("%d",a[j]);x++;}
            }
            printf("-%d\n",i);
        }
        else
        {
            for(j=10000;j>=2;j--)
            {
                b[j]+=a[j];
            }
            for(j=10000;j>=2;j--)
            {
                if(b[j]>9)
                {
                    b[j]%=10;
                    b[j-1]++;
                }
            }
            y=0;x=0;
            for(j=1;j<=10000;j++)
            {
                if (b[j]!=0) {y=1;}
                if (y==1) {printf("%d",b[j]);x++;}
            }
            printf("-%d\n",i);
        }
    }
}

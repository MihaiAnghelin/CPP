#include <stdio.h>
#include <fstream>
#include <math.h>

using namespace std;



int main()
{
    int n,x[100000],i,ok=1,d,j,y[100000],s,r=0;
    fstream f("furnici.in",ios::in);
    f>>n;
    if(n<2||n>100000)
    {
        printf("Datele de intrare nu se respecta.");
    }
    else
    {
        for(i=1;i<=n;i++)
        {
            f>>x[i];
            if(x[i]<10||x[i]>1000000)
            {
                ok=0;
            }
        }
        if (!ok)
        {
            printf("Datele de intrare nu se respecta.");
        }
        else
        {
            for(i=1;i<=n;i++)
            {
                y[i]=2;
               for(j=2;j<sqrt(x[i]);j++)
               {
                   if(x[i]%j==0)
                   {
                       y[i]+=2;
                   }
               }
               if(x[i]%(int)sqrt(x[i])==0)
                {
                    y[i]++;
                }
            }
            if(y[1]>y[2])
            {
                s=2;
            }
            else
            {
                s=1;
            }
            for(i=2;i<n;i++)
            {
                if (s==1&&y[i]>y[i+1])
                {
                    s=2;
                    r++;
                }
                else if(s==2&&y[i]<y[i+1])
                {
                    s=1;
                }
            }
            fstream g("furnici.out",ios::out);
            g<<r;
            g.close();
        }
    }
    f.close();

}

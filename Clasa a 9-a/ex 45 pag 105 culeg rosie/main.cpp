#include <iostream>
#include <fstream>

using namespace std;

int impar(int x)
{
    int ok=0;
    if(x%2!=0)
    {
        ok=1;
    }
    return ok;
}

int main()
{
    int n,m,a[100],b[100],c[200],i,j=1,h;
    fstream f("date.in",ios::in);
    f>>n;
    for(i=1;i<=n;i++)
    {
        f>>a[i];
        if(impar(a[i]))
        {
            c[j]=a[i];
            j++;
        }
    }
    f>>m;
    for(i=1;i<=m;i++)
    {
        f>>b[i];
        if(impar(b[i]))
        {
            c[j]=b[i];
            j++;
        }
    }
    for(i=1;i<j;i++)
    {
        for(h=1;h<j-i;h++)
        {
            if(c[h]>c[h+1])
            {
                c[h]=c[h]+c[h+1];
                c[h+1]=c[h]-c[h+1];
                c[h]=c[h]-c[h+1];
            }
        }
    }
    fstream g("date.out",ios::out);


   for(i=1;i<j;i++)
    {
        g<<c[i]<<" ";
    }

}

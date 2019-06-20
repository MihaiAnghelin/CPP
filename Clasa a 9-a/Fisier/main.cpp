#include <stdio.h>
#include <fstream>

using namespace std;

int main()
{
    int a[100],i,n;
    fstream f("Fisier.txt",ios::in);
    f>>n;
    for (i=1;i<=n;i++)
    {
        f>>a[i];
    }
    f.close();
    for(i=1;i<=n;i++)
    {
        printf("%d ",a[i]);
    }
    for(i=1;i<n;i++)
    {
        for(int j=1;j<=n-i;j++)
        {
            if(a[j]>a[j+1])
            {
                a[j]+=a[j+1];
                a[j+1]=a[j]-a[j+1];
                a[j]-=a[j+1];
            }
        }
    }
    printf("\n");
    for(i=1;i<=n;i++)
    {
        printf("%d ",a[i]);
    }
    fstream g("Fisier.txt",ios::out);
    g<<n<<"\n";
    for (i=1;i<=n;i++)
    {
        g<<a[i]<<" ";
    }
    g.close();
}

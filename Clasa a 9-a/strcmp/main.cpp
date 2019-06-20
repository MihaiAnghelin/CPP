#include <iostream>
#include <string.h>
#include <fstream>

using namespace std;

int main()
{
    int i,j,n;
    char a[30][100],b[100];
    fstream f("date.in",ios::in);
    fstream g("date.out",ios::out);
    f>>n;
    for(i=0;i<=29;i++)
    {
        for(j=0;j<=99;j++)
        {
            a[i][j]=0;
        }
    }
    for(i=0;i<=n;i++)
    {
        f.getline(a[i],20);
    }
    for(i=1;i<=n;i++)
    {
        cout<<a[i]<<endl;
    }
    //sortare
    for(i=1;i<=n-1;i++)
    {
        for(j=1;j<=n-1;j++)
        {
            if(strcmp(a[j],a[j+1])>0)
            {
                strcpy(b,a[j]);
                strcpy(a[j],a[j+1]);
                strcpy(a[j+1],b);
            }
        }
    }


    for(i=1;i<=n;i++)
    {
        g<<a[i]<<endl;
    }
    f.close();
    g.close();

}

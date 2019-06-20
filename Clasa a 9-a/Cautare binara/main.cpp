#include <iostream>
#include <fstream>

using namespace std;

int cauta(int v[],int x,int ls,int ld)
{
    int a=(ls+ld)/2;
    if(v[a]==x)
    {
        return a;
    }
    else if (ls<ld&&v[a]<x)
    {
        return cauta(v,x,a+1,ld);
    }
    else if (ls<ld&&v[a]>x)
    {
        return cauta(v,x,ls,a-1);
    }
    else
    {
        return 0;
    }

}

int main()
{
    int n,i,j,v[100],x;
    fstream f("date.in",ios::in);

    f>>n;
    for(i=1;i<=n;i++)
    {
        f>>v[i];
    }
    for(i=1;i<n;i++)
    {
        for(j=1;j<=n-i;j++)
        {
            if(v[j]>v[j+1])
            {
                v[j]=v[j]+v[j+1];
                v[j+1]=v[j]-v[j+1];
                v[j]=v[j]-v[j+1];
            }
        }
    }
    for(i=1;i<=n;i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<"\nx = ";cin>>x;
    cout<<cauta(v,x,1,n);
}

#include <iostream>
#include <fstream>

using namespace std;

int cauta(int v[],int x,int ls,int ld)
{
    int a=(ls+ld)/2,st=0,dr=0;
    if(v[a]==x)
    {
        return a;
    }

    if (ls<ld)
    {
        dr=cauta(v,x,a+1,ld);
        st=cauta(v,x,ls,a-1);
    }

    if(dr) return dr;
    else if(st) return st;
    else return 0;

}

void afis(int x)
{
    if(x)
    {
        afis(x-1);
        cout<<x<<" ";
    }
}


int main()
{
    int n,i,v[100],x;
    fstream f("date.in",ios::in);

    f>>n;
    for(i=1;i<=n;i++)
    {
        f>>v[i];
    }
    for(i=1;i<=n;i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<"\nx = ";cin>>x;
   // cout<<cauta(v,x,1,n);
    afis(x);
}

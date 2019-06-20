#include <iostream>

using namespace std;

int main()
{
    int n,k,p,a[100],i;
    cout<<"n=";cin>>n;
    cout<<"p=";cin>>p;
    cout<<"k=";cin>>k;
    for(i=1;i<=n;i++)
    {
        cout<<"a["<<i<<"]=";
        cin>>a[i];
    }
    for(i=1;i<=n;i++)
    {
        if(a[i]%p==k)
        {
            cout<<a[i]<<" ";
        }
    }
}

#include <iostream>

using namespace std;

int main()
{
    int i,j=1,p=1,a[100],n,np=0;
    cout<<"Numarul numerelor este: ";cin>>n;
    for(i=1;i<=n;i++)
    {
        cout<<"a["<<i<<"]= ";
        cin>>a[i];
    }
    while(p)
    {
        p=0;
        for(i=1;i<=n-j;i++)
        {
            if(a[i]>a[i+1])
            {
                a[i]=a[i]+a[i+1];
                a[i+1]=a[i]-a[i+1];
                a[i]=a[i]-a[i+1];
                p=1;
            }
            np++;
        }
        j++;
    }
    for(i=1;i<=n;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<"\nnp="<<np;
}

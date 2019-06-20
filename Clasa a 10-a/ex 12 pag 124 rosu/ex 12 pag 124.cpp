#include <iostream>

using namespace std;

int main()
{
    int a[20][20],i,j,n,sc[20],sl[20];
    cout<<"n = ";cin>>n;
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
        {
            cout<<"a["<<i<<"]["<<j<<"] = ";
            cin>>a[i][j];
        }
    for(i=0;i<n;i++)
    {
        sc[i]=0;sl[i]=0;
    }
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
        {
            sc[i]+=a[j][i];
            sl[i]+=a[i][j];
        }
    cout<<"Sume coloane: ";
    for(i=0;i<n;i++) cout<<sc[i]<<" ";
    cout<<endl<<"Sume linii: ";
    for(i=0;i<n;i++) cout<<sl[i]<<" ";
    cout<<endl;
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
            if(sc[i]==sl[i]&&sc[j]==sl[j]) cout<<a[i][j]<<" ";

}

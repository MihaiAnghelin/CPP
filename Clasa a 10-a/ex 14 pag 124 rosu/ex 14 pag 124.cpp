#include <iostream>

using namespace std;

int main()
{
    int a[20][20],i,j,n,sumj=0,sums=0;
    cout<<"n = ";cin>>n;
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
        {
            cout<<"a["<<i<<"]["<<j<<"] = ";
            cin>>a[i][j];
        }
    for(i=0;i<n-1;i++)
    {
        sumj+=a[i+1][i];
        sums+=a[i][i+1];
    }
    cout<<"Suma = "<<sums+sumj<<" ("<<sums<<" + "<<sumj<<")";
}

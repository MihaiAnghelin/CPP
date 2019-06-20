#include <iostream>

using namespace std;

int cmmdc(int a,int b)
{
    if(a==b)
        return a;
    else if(a>b) cmmdc(a-b,b);
        else cmmdc(a,b-a);
}

int main()
{
    int n,a[20][20],i,j,s1=0,s2=0;
    cout<<"n = ";cin>>n;
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
        {
            cout<<"a["<<i<<"]["<<j<<"] = ";
            cin>>a[i][j];
        }
    for(i=0;i<=n-2;i++)
        for(j=i+1;j<=n-1;j++)
            s1+=a[i][j];
    for(j=0;j<=n-2;j++)
        for(i=j+1;i<=n-1;i++)
            s2+=a[i][j];
    if(s1>0&&s2>0)
        cout<<"C.M.M.D.C. = "<<cmmdc(s1,s2);
    else
        if(s1<0) cout<<"Suma elementelor de deasupra DP este 0";
        else if(s2<0) cout<<"Suma elementelor de sub DP este 0";
}

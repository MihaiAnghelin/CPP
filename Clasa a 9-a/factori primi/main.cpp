#include <iostream>

using namespace std;

int main()
{
    int a,d=2,p,b[11],c[11],i=1;
    cout<<"a = ";
    cin>>a;

    while(a>1)
    {
        p=0;
        while(a%d==0)
        {
            p++;
            a/=d;
        }
        if(p) {b[i]=d;c[i++]=p;}
        //if(p&&a-1) cout<<"*";
        d++;
    }

    for(a=1;a<i-1;a++)
    {
        cout<<b[a]<<"^"<<c[a]<<"*";
    }
    cout<<b[i-1]<<"^"<<c[i-1];
}

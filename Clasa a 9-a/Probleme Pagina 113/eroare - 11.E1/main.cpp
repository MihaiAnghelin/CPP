#include <iostream>

using namespace std;

int main()
{
    int m,i;
    float E1=0,n;
    cout<<"Introduceti numarul de elemente:";cin>>m;

    for(i=1;i<=m;i++)
    {
        n=i;
        E1+=1/(n*n);

    }
    cout<<"E1="<<E1;
}

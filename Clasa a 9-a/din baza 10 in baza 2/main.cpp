#include <iostream>

using namespace std;

int main()
{
    int a,baza;
    cout<<"a(10) = ";cin>>a;
    cout<<"baza = ";cin>>baza;

    cout<<"a(baza) = ";


    while(a)
    {
        if(a%baza<10) cout<<a%baza;
        else cout<<(char) (a%baza+55);
        a/=baza;

    }


}

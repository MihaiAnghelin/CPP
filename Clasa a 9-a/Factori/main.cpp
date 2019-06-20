#include <iostream>

using namespace std;

int main()
{
    int n,i=2,j;
    cout<<"N = ";
    cin>>n;
    while(n>1)
    {
        j=0;
        while(!(n%i))
        {
            n/=i;
            j++;
        }
        if (j)
        {
            cout<<i<<"^"<<j;
            if (n-1)
            {
                cout<<"+";
            }
        }
        i++;

    }
}

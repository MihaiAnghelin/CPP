#include <iostream>

using namespace std;

int main()
{
    char a[100];
    cout<<"Introduceti sirul de caractere: ";
    cin>>a;
    for(int i=0;i<5;i++)
    {
        if(a[i]=='\0')
        {
            cout<<(char)0;
            break;
        }
        cout<<a[i];
    }
}

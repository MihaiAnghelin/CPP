#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    int i,j,n;
    char a[40][40],xx[40],car=178;
    fstream f("emoticon.txt",ios::in);
    f>>n;
    for(j=1;j<=n;j++)
    {
        f.getline(xx,29);
        for(i=1;i<=n;i++)
        {
            a[j][i]=xx[i-1];
        }
    }
    f.close();
    for(j=1;j<=n;j++)
    {
        for(i=1;i<=n;i++)
        {

                //if(a[j][i]==48)
                //{
                  //  cout<<car;
                //}
                //else
                //{
                  //  cout<<" ";
                //}
                cout<<a[j][i];
        }
        cout<<"\n";
    }
}

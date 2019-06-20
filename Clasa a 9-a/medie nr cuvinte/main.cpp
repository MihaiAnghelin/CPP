#include <iostream>
#include <fstream>
#include <string.h>

using namespace std;

int main()
{
    int cuv,lug,c,poz;
    char a[100];
    fstream f("date.in",ios::in);
    fstream g("date.out",ios::out);
    while(!f.eof())
    {
        poz=0;lug=0,cuv=0;
        f.getline(a,100);
        while(poz<strlen(a))
        {
            c=0;
            while(!((a[poz]>='A'&&a[poz]<='Z')||(a[poz]>='a'&&a[poz]<='z'))&&poz<strlen(a)) {poz++;}
            while(((a[poz]>='A'&&a[poz]<='Z')||(a[poz]>='a'&&a[poz]<='z'))&&poz<=strlen(a)) {c++;poz++;}
            cuv++;lug+=c;
        }
        if (cuv) cout<<lug/(cuv-1)<<endl;
    }

}

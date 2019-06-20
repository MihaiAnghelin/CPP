#include <iostream>
#include <stdlib.h>
//nested
//imbricate
using namespace std;

int nr_cifre(int x)
{
    if (!x) return 0;
    else return 1+nr_cifre(x/10);
}

int main()
{
    int x,n,i,a=1,b=1,j,c=1,nra,nrc,cif[10],dis=0,cifa[10],cifc[10],disa,disc,ca,cc;
    cout<<"Numarul numerelor n este: ";cin>>n;
    if(n>=100||n<0)
    {
        cout<<"Prea multe numere in sir.(n<100)";
    }
    else
    {
        do
        {
            cout<<"a[1] = ";cin>>nra;
        }
        while (nra>999999999);
        nrc=nra;
        for(i=0;i<=9;i++)
        {
            cif[i]=0;
        }
        while(nrc)
        {
            if(!cif[nrc%10])
            {
                dis++;
                cif[nrc%10]=1;
                cifa[nrc%10]=1;
            }
            nrc/=10;
        }
        disa=dis;
        for(i=2;i<=n;i++)
        {
            do
            {
                cout<<"a["<<i<<"] = ";cin>>nrc;
            }
            while (nrc>999999999);
            for(j=0;j<=9;j++)
            {
                cifc[j]=0;
            }
            cc=nrc;
            disc=0;
            while(cc)
            {
                if(!cifc[cc%10])
                {
                    disc++;
                    cifc[cc%10]=1;
                }
                cc/=10;
            }
            x=0;j=0;
            while(!x&&j<10)
            {
                if (cifa[j]==cifc[j]&&cif[j]==1)
                {
                    x=1;
                }
                j++;
            }
            if (!x) {a=0;}

            if (abs((nr_cifre(nra)-nr_cifre(nrc)))!=1) {b=0;}
            else
            {
                if (abs(disa-disc)>1) {b=0;}
            }
            for(j=0;j<=9;j++)
            {
                if (cifc[j]!=cif[j]) {c=0;}
                cifa[j]=cifc[j];
            }

            disa=disc;
            nra=nrc;
        }
        if(a)
        {
            cout<<"a. DA"<<endl;
        }
        else
        {
            cout<<"a. NU"<<endl;
        }
        if(b)
        {
            cout<<"b. DA"<<endl;
        }
        else
        {
            cout<<"b. NU"<<endl;
        }
        if(c)
        {
            cout<<"c. DA"<<endl;
        }
        else
        {
            cout<<"c. NU"<<endl;
        }
    }
}

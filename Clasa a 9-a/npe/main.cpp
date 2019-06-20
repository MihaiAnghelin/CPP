//#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    int i,j,n,x,li=1,ls=1,lst,ldr,p,ci,cs,d,pozl,pozc;//int v[200][200];
    //cout<<"n=";cin>>n;
    fstream f("npe.in",ios::in);
    f>>n;
    if(n==1)
    {
        p=1;
        ci=1;
        cs=1;
    }
    //cout<<li<<"---->"<<ls<<endl;
    for(i=2;i<=2000;i++)
    {
        li=ls+1;
        ls=li+i*i-1;
        if(n>=li&&n<=ls)
        {
            p=i;
            ci=li;
            cs=ls;
        }
        //cout<<li<<"---->"<<ls<<endl;
    }
    //cout<<p<<" "<<ci<<" "<<cs<<endl<<"----"<<endl;
    lst=1;ldr=p;
    li=1;ls=p;
    i=1;j=1;
    d=1;
    for(x=ci;x<=cs;x++)
    {
        //v[i][j]=x;
        if (x==n)
        {
            pozl=i;
            pozc=j;
        }
        if(d==1&&j<ldr)
        {
            j++;
        }
        else if(d==1)
        {
            d=2;
            i++;
            li++;
        }
        else if(d==2&&i<ls)
        {
            i++;
        }
        else if(d==2)
        {
            d=3;
            j--;
            ldr--;
        }
        else if(d==3&&j>lst)
        {
            j--;
        }
        else if(d==3)
        {
            d=4;
            i--;
            ls--;
        }
        else if(d==4&&i>li)
        {
            i--;
        }
        else if(d==4)
        {
            d=1;
            j++;
            lst++;
        }
    }
    //for(i=1;i<=p;i++)
    //{
        //for(j=1;j<=p;j++)
        //{
            //cout<<v[i][j]<<" ";
       // }
        //cout<<endl;
    //}
    //cout<<p<<" "<<pozl<<" "<<pozc;
    fstream g("npe.out",ios::out);
    g<<p<<" "<<pozl<<" "<<pozc;
    f.close();
    g.close();
}

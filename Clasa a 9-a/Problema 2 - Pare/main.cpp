#include <iostream>
#include <fstream>
#include <math.h>

using namespace std;

int baza2(int numar, int a[])
{
    int total=-1;
    for(int i=0;numar>0;i++)
    {
        if(numar%2 == 0)
            a[i]=0;
        else
            a[i]=1;
        total++;
        numar/=2;
    }
    return total;
}

int prim(int a)
{
    int i=2;
    bool ok = true;
    while(i<=sqrt(a)&&ok)
    {
        if(a % i == 0)
        {
            ok = false;
        }
        i++;
    }
    return ok;
}

void factori(int zop , int nrprim[])
{
    int i;
    for(i=2;i<=200;i++)
        {
            if(prim(i))
            {
                while(zop%i==0)
                {
                    nrprim[i]+=1;
                    zop/=i;
            }
            }
        }
}

int par(int a)
{
    bool ok=true;
    if(a%2!=0)
    {
        ok=false;
    }
    return ok;
}

int main()
{
    fstream f("pare.in",ios::in);
    fstream g("pare.out",ios::out);
    unsigned int a,b,na;
    f>>a;
    f>>b;
    if(0<a&&a<b&&b<2000000000)
    {
        int x[35],i,nrprim[205],copa=a,copb=b;
       /* na=baza2(a,x);*/
        for(i=2;i<=200;i++)
        {
            nrprim[i]=0;
        }
        int asa=36;
        factori(asa,nrprim);
        /*for(i=2;i<=200;i++)
        {
            if(nrprim[i])
            cout<<i<<"^"<<nrprim[i]<<"+";
        }*/
        for(i=a;i<=b;i++)
        {
            if(par(i))
            {

            }
        }

    }
    else
    {
        g<<"Restrictiile nu sunt respectate";
    }
    f.close();
    g.close();
}

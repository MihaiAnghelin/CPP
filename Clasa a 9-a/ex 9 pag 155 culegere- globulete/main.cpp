#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    unsigned short int n,m,k,g[100][100],i,j,l,ix,iy,max=0,pozx[100],pozy[100],c[100][100],suma=0;
    fstream f("glob.in",ios::in);
    fstream o("glob.out",ios::out);
    f>>n;
    f>>m;
    f>>k;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=m;j++)
        {
            f>>g[i][j];
        }
    }
    for(i=0;i<=n+1;i++)
    {
        g[i][0]=0;
        g[i][m+1]=0;
    }
    for(i=0;i<=m+1;i++)
    {
        g[0][i]=0;
        g[n+1][i]=0;
    }
    for (l=1;l<=k;l++)
    {
        max=0;
        for(i=1;i<=n;i++)
        {
            for(j=1;j<=m;j++)
            {
                c[i][j]=g[i][j]+g[i-1][j]+g[i+1][j]+g[i][j-1]+g[i][j+1];
                if (c[i][j]>max&&g[i][j]!=0)
                {
                    max=c[i][j];
                    ix=i;iy=j;
                }
            }
        }
        pozx[l]=ix;
        pozy[l]=iy;

        suma+=max;
        cout<<pozx[l]<<" "<<pozy[l]<<" "<<suma<<endl;
        g[ix][iy]=0;
        g[ix-1][iy]=0;
        g[ix+1][iy]=0;
        g[ix][iy-1]=0;
        g[ix][iy+1]=0;
        //for(i=1;i<=n;i++)
        //{
          //  for(j=1;j<=m;j++)
            //{
              //  cout<<g[i][j]<<" ";
            //}
            //cout<<endl;
        //}
        //cout<<endl;
    }
    o<<suma<<endl;
    for(l=1;l<=k;l++)
    {
        o<<pozx[l]<<" "<<pozy[l]<<endl;
    }
}

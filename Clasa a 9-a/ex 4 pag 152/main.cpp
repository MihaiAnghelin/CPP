
#include <fstream>

using namespace std;

int main()
{
    short int n,m,k,i,j,piese[100][100],p=0;
    fstream f("piese.in",ios::in);
    f>>n;
    f>>m;
    f>>k;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=m;j++)
        {
            f>>piese[i+2][j+2];
        }
    }
    for(i=1;i<=n+4;i++)
    {
            piese[i][1];
            piese[i][2];
            piese[i][m+3];
            piese[i][m+4];
    }
    for(i=1;i<=m+4;i++)
    {
            piese[1][i];
            piese[2][i];
            piese[n+3][i];
            piese[n+4][i];
    }
    for(i=1;i<=n+4;i++)
    {
        for(j=1;j<=m+4;j++)
        {
            if(piese[i][j]==k)
            {
                if(piese[i][j+1]==k&&piese[i+1][j]==k&&piese[i+2][j]==k)
                {
                    if(piese[i-1][j]!=k&&piese[i-1][j+1]!=k&&piese[i][j+2]!=k&&piese[i][j-1]!=k&&piese[i+1][j-1]!=k&&piese[i+2][j-1]!=k&&piese[i+3][j]!=k&&piese[i+2][j+1]!=k&&piese[i+1][j+1]!=k)
                    {
                        p++;
                        piese[i][j]=0;
                        piese[i][j+1]=0;
                        piese[i+1][j]=0;
                        piese[i+2][j]=0;
                    }                }
                if(piese[i][j+1]==k&&piese[i][j+2]==k&&piese[i+1][j+2]==k)
                {
                    if(piese[i][j-1]!=k&&piese[i-1][j]!=k&&piese[i-1][j+1]!=k&&piese[i-1][j+2]!=k&&piese[i][j+3]!=k&&piese[i+1][j+3]!=k&&piese[i+2][j+2]!=k&&piese[i+1][j+1]!=k&&piese[i+1][j]!=k)
                    {
                        p++;
                        piese[i][j]=0;
                        piese[i][j+1]=0;
                        piese[i][j+2]=0;
                        piese[i+1][j+2]=0;
                    }
                }
                if(piese[i+1][j]==k&&piese[i+2][j]==k&&piese[i+2][j-1]==k)
                {
                    if(piese[i-1][j]!=k&&piese[i][j+1]!=k&&piese[i+1][j+1]!=k&&piese[i+2][j+1]!=k&&piese[i+3][j]!=k&&piese[i+3][j-1]!=k&&piese[i+2][j-2]!=k&&piese[i+1][j-1]!=k&&piese[i][j-1]!=k)
                    {
                        p++;
                        piese[i][j]=0;
                        piese[i+1][j]=0;
                        piese[i+2][j]=0;
                        piese[i+2][j-1]=0;
                    }
                }
                if(piese[i+1][j]==k&&piese[i+1][j-1]==k&&piese[i+1][j-2]==k)
                {
                    if(piese[i-1][j]!=k&&piese[i][j+1]!=k&&piese[i+1][j+1]!=k&&piese[i+2][j]!=k&&piese[i+2][j-1]!=k&&piese[i+2][j-2]!=k&&piese[i+1][j-3]!=k&&piese[i][j-2]!=k&&piese[i][j-1]!=k)
                    {
                        p++;
                        piese[i][j]=0;
                        piese[i+1][j]=0;
                        piese[i+1][j-1]=0;
                        piese[i+1][j-2]=0;
                    }
                }



            }
        }
    }
//    cout<<p<<endl;
    for(i=1;i<=n+4;i++)
    {
        for(j=1;j<=m+4;j++)
        {
//            cout<<piese[i][j]<<" ";
        }
//        cout<<endl;
    }
}

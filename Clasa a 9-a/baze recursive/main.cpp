#include <stdio.h>

using namespace std;

void bazax(int x,int by)
{
    if (x)
    {
        bazax(x/by,by);
        if(x%by<10) cout<<x%by;
        else printf("%c",(x%by+55));
    }
}

int baza10(int x, int bx)
{

}

int main()
{
    int bx,by;
    cout<<"x = ";
    char i,x[100];
    gets(x);
    printf("Baza in care este x: ");
    scanf("%d",&bx);

}

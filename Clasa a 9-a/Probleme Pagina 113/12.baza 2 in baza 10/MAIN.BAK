#include <iostream.h>
#include <conio.h>

int main()
{
    int x=0,p=1,n=0;
    char c;
    cout<<"Introduceti numarul in baza 2: ";
    do
    {
	c=getch();
	if (c==48||c==49)
	{
	    cout<<c;
	    n=n*10+c-48;
	}

    }while(c!=13);
    while(n)
    {
        x+=n%10*p;
        n/=10;
        p*=2;
    }
    cout<<"Numarul introdus, transformat in baza 10 este:"<<x;
}

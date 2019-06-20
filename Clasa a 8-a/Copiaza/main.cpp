#include <stdio.h>
#include <fstream>

using namespace std;

int main()
{
    char c;
    fstream f("date.txt",ios::in);
    fstream g("date2.txt",ios::out);
    while(!f.eof())
    {
        f>>c;
        g<<c;
    }
    f.close();
    g.close();
}

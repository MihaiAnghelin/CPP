#include <graphics.h>
#include <stdio.h>
#include <conio.h>

int main()
{
    int gDriver=DETECT;
    int gmode=0;
    initgraph(&gDriver,&gmode,"");
    line(0,0,200,200);
    getch();
    closegraph();
}

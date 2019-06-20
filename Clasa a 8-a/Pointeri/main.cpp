#include <stdio.h>

using namespace std;

void adunare(int a,int b,int *c)
{
    (*c)=a+b;
}

int main()
{
    int n;
    adunare(4,9,&n);printf("%d",n);
}

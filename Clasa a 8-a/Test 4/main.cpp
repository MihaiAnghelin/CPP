#include<iostream>
#include<fstream>
#include<stdio.h>
using namespace std;

int main()
{
    int a[100],x,i,y,j;
    fstream fisier("date.txt",ios::in);
    fisier>>x;
    for(i=1;i<=x;i++)
    {

        fisier>>a[i];
    }
    for(i=1;i<x;i++)
    {
        for (j=1;j<=x-i;j++)
        if(a[j]>a[j+1])
        {
            y=a[j];
            a[j]=a[j+1];
            a[j+1]=y;
        }
    }

    for(i=1;i<=x;i++)
    {
        printf("%d ",a[i]);
    }
}

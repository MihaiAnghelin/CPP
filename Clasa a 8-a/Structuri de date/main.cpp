#include <stdio.h>
#include <string>

using namespace std;

int main()
{
    struct elev
    {
        char nume[30];
        float medie_mate;
        float medie_romana;
        float medie;
    };
    elev cls[50];
    int n,i;
    elev x;
    printf("Numarul elevilor=");
    scanf("%d",&n);
    for (i=1;i<=n;i++)
    {
        printf("Nume elev:");
        scanf("%s",&cls[i].nume);
        printf("Medie mate:");
        scanf("%f",&cls[i].medie_mate);
        printf("Medie romana:");
        scanf("%f",&cls[i].medie_romana);
        cls[i].medie=(cls[i].medie_mate+cls[i].medie_romana)/2;
    }

    //sortare dupa medie

    for (i=1;i<n;i++)
    {
        for(int j=1;j<=n-i;j++)
        {
            if(cls[j].medie>cls[j+1].medie)
            {
                x=cls[j];
                cls[j]=cls[j+1];
                cls[j+1]=x;
            }
        }
    }
    for(i=1;i<=n;i++)
    {
        printf("%s\t%5.2f\n",cls[i].nume,cls[i].medie);
    }
}

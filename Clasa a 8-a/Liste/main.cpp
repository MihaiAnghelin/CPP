#include <stdio.h>

using namespace std;

int main()
{
     struct elev
    {
        char nume[30];
        float medie_mate;
        float medie_romana;
        float medie;
        elev *next;
    };
    elev *p,*element;
    p=new elev;
    p=NULL;
    int n,i;
    printf("Numarul elevilor=");
    scanf("%d",&n);
    for (i=1;i<=n;i++)
    {
        element=new elev;
        printf("Nume elev:");
        scanf("%s",&element->nume);
        printf("Medie mate:");
        scanf("%f",&element->medie_mate);
        printf("Medie romana:");
        scanf("%f",&element->medie_romana);
        element->medie=(element->medie_mate+element->medie_romana)/2;
        element->next=p;
        p=element;

    }

    while(p!=NULL)
    {
        printf("%s\t%5.2f\n",p->nume,p->medie);
        p=p->next;
    }
}

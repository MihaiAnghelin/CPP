#include <stdio.h>

int main()
{
    struct chitara
    {
        int nr_corzi;
        int nr_freturi;
        int marime;
        int electric;
        chitara *urmator;
    };
    chitara *a,*b,*c,*d,*e,*sir;
    a=new chitara;
    b=new chitara;
    c=new chitara;
    d=new chitara;
    printf("Introduceti nr. de corzi:");
    scanf("%d",&a->nr_corzi);
    printf("Introduceti nr. de freturi:");
    scanf("%d",&a->nr_freturi);
    printf("Introduceti marimea:");
    scanf("%d",&a->marime);
    printf("Introduceti 1 daca este electirca:");
    scanf("%d",&a->electric);

    printf("Introduceti nr. de corzi:");
    scanf("%d",&b->nr_corzi);
    printf("Introduceti nr. de freturi:");
    scanf("%d",&b->nr_freturi);
    printf("Introduceti marimea:");
    scanf("%d",&b->marime);
    printf("Introduceti 1 daca este electirca:");
    scanf("%d",&b->electric);

    printf("Introduceti nr. de corzi:");
    scanf("%d",&c->nr_corzi);
    printf("Introduceti nr. de freturi:");
    scanf("%d",&c->nr_freturi);
    printf("Introduceti marimea:");
    scanf("%d",&c->marime);
    printf("Introduceti 1 daca este electirca:");
    scanf("%d",&c->electric);

    printf("Introduceti nr. de corzi:");
    scanf("%d",&d->nr_corzi);
    printf("Introduceti nr. de freturi:");
    scanf("%d",&d->nr_freturi);
    printf("Introduceti marimea:");
    scanf("%d",&d->marime);
    printf("Introduceti 1 daca este electirca:");
    scanf("%d",&d->electric);

    a->urmator=b;
    b->urmator=c;
    c->urmator=d;
    d->urmator=NULL;
    sir=new chitara;
    sir=a;

    e=new chitara;
    printf("Introduceti nr. de corzi:");
    scanf("%d",&e->nr_corzi);
    printf("Introduceti nr. de freturi:");
    scanf("%d",&e->nr_freturi);
    printf("Introduceti marimea:");
    scanf("%d",&e->marime);
    printf("Introduceti 1 daca este electirca:");
    scanf("%d",&e->electric);
    e->urmator=c;
    b->urmator=e;

    while(sir!=NULL)
    {
        printf("%d\t%d\t%d\t",sir->nr_corzi,sir->nr_freturi,sir->marime);
        if (sir->electric==1)
        {
            printf("Electrica");
        }
        else
        {
            printf("Acustica");
        }
        printf("\n");
        sir=sir->urmator;
    }
}

#include <stdio.h>

int main()
{
    struct catel
    {
        float kg;
        catel *next;
        catel *prev;
    };
    catel *lista,*element,*ultim;
    lista=new catel;
    ultim=new catel;
    lista=NULL;
    float x;
    do
    {
        printf("Introduceti masa catelului dvs.:");
        scanf("%f",&x);
        if (x)
        {
            element=new catel;
            element->kg=x;
            element->next=lista;
            if(lista!=NULL)
            {
            lista->prev=element;
            }
            element->prev=NULL;
            lista=element;

        }
    }while(x);

    element=lista;
    while(element!=NULL)
    {
        printf("%.2f\t",element->kg);
        ultim=element;
        element=element->next;
    }
    printf("\n");
    element=ultim;
    while(element!=NULL)
    {
        printf("%.2f\t",element->kg);
        element=element->prev;
    }
}

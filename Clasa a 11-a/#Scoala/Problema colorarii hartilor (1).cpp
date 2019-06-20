#include<iostream>
#include<fstream>

using namespace std;


fstream f("fisier.in");
int x[10], n, a[11][11];

char culori[4][16];

void init(int k)
{
    x[k] = 0;
}

bool exista(int k)
{
    return (x[k] < 4);
}

bool valid(int k)
{
    bool ev = true;
    for(int i = 1 ; i < k ; i++)
    {
        if(a[i][k] == 1 && x[i] == x[k])
                ev = false;
    }
    return ev;
}

bool solutie(int k)
{
    return (k == n);
}
int index = 1;
void tipar()
{
    cout<<index++<<". ";
    for (int i = 1; i <= n; i++)
        cout << culori[x[i]] << " ";
    cout << endl;
}

void back()
{
    int k = 1;
    init(k);
    while (k > 0)
    {
        if (exista(k))
        {
            x[k]++;
            if (valid(k))
                if (solutie(k))
                {
                    tipar();
                }
                else
                {
                    k++;
                    init(k);
                }
        }
        else
        {
            k--;
        }
    }
}

int main()
{
    for(int i = 1; i <= 4; i++)
    {
        cout<<"Introduceti culoarea "<<i<<": ";
        cin>>culori[i];
    }
    f>>n;      //numarul de tari
//citire matrice de adiacenta
    for(int i = 1 ; i <= n ; i++)
    {
        for(int j = 1 ; j <= n ; j++)
            f>>a[i][j];
    }

/*
//afisare matrice
    for(int i = 1 ; i <= n ; i++)
    {
        for(int j = 1 ; j <= n ; j++)
            cout<<a[i][j]<<" ";
    cout<<endl;
    }
*/
    back();
    return 0;
}

/* 
    Se citesc n culori(char[16]).
    Sa se alcatuiasca toate steagurile tricolore posibile a.i. in mijloc
    sa se afle doar una din ultimele doua culori citite.
    Se va afisa pe friecare rand: nr. drapelului: culoare1, culoare 2, culoare3
*/
#include<iostream>

using namespace std;

int x[10], n;
char sir[16][16];

void init(int k)
{
    x[k] = 0;
}

bool exista(int k)
{
    return (x[k] < n);
}

bool valid(int k)
{
    bool ev = true;
    for (int i = 0; i < k; i++)
    {
        if (sir[x[k]] == sir[x[i]])
            ev = false;
    }
    /*if (sir[x[k]] != sir[x[n - 1]] || sir[x[k]] != sir[x[n]])
        ev = false;*/
    return ev;
}

bool solutie(int k)
{
    return (k == 3);
}

int nrDrapel = 0;
void tipar()
{
    cout << nrDrapel << ". ";
    for (int i = 1; i <= 3; i++)
        cout << sir[x[i]] << ", ";
    cout << endl;
    nrDrapel++;
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
    cout << "n (numarul de culori) = "; cin >> n;
    for (int i = 0; i < n; i++)
    {
        cout << "Culoare " << i+1<< ": ";
        cin >> sir[i];
    }
    back();
    system("pause");
    return 0;
}
#include <iostream>
#include <cmath>
#include <string>
#include <time.h> 

using namespace std;

int zad1(int b)
{
    int p=b;
    for (int i = 0; i < 6; i++)
    {
        p = p*b;
    }
    cout << p<<endl;
    return 0;
}

int zad2(int b, int n)
{
    int p = b;
    for (int i = 0; i < n; i++)
    {
        p = p * b;
    }
    cout << p;
    return 0;
}

int zad3(int x1, int x2, int y1, int y2)
{
    double dl=0;
    dl = (sqrt((pow((x2 - x1), 2) + pow((y2 - y1),2), 2)));
    cout << dl;
    return 0;
}

int zad4(string tekst)
{
    int licz = 0;
    for (int i = 0;i < tekst.size(); i++)
    {
        if (tekst[i] == 'a')
        {
            licz++;
        }
    }
    cout << licz;
    return 0;
}

void zad5(int *tab, int n, int a, int b)
{
    int mem = a;
    for(int i =0;i<n;i++)
    {
        if (a <= b)
        {
            tab[i] = a;
            a++;
        }
        else
        {
            a = mem;
            tab[i] = a;
            a++;
        }
        cout << tab[i] << endl;
    }
}

int zad6(string tekst)
{
    string zam;
    int i = tekst.size();
    i--;
    for (i; i >=0 ; i--)
    {
        zam += tekst[i];
    }
    cout << zam;
    return 0;
}

int zad7(string tekst)
{
    string zam;
    int i = tekst.size();
    i--;
    srand(time(NULL));
    for (int j = 0; j < i; j++)
    {
        int los = rand()%i;
        zam += tekst[i];
    }
    
    cout << zam;
    return 0;
}

int zad8(string tekst)
{
    
    return 0;
}

int main()
{
    /*int a;
    cout << "Podaj liczbe" << endl;
    cin >> a;
    zad1(a);
    int n;
    cout << "Podaj liczbe i potege" << endl;
    cin >> a;
    cin >> n;
    zad2(a,n);*/
    /*double x1, x2, y1, y2;
    cout << "Podaj wspolrzedne p1 i p2" << endl;
    cin >> x1 >> y1 >> x2 >> y2;
    zad3(x1, x2, y1, y2);*/
   /* string tekst;
    cout << "podaj zdanie"<<endl;
    cin >> tekst;
    zad4(tekst);*/
    /*int n;
    cout << "podaj wielkosc tablicy" << endl;
    cin >> n;
    int* tab = new int [n];
    int a, b;
    cout << "podaj zakres" << endl;
    cin >> a >> b;
    zad5(tab, n, a, b);
    delete [] tab;*/
    /*string tekst2;
    cout << "podaj zdanie" << endl;
    cin >> tekst2;
    zad6(tekst2);*/
    /*string tekst3;
    cout << "podaj zdanie" << endl;
    getline(cin, tekst3);
    zad7(tekst3);*/
    /*string dane;
    cout << "podaj dane" << endl;
    cin >> dane;
    zad8(dane);*/
}
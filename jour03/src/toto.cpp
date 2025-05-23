#include <iostream>
using namespace std;

void change(int *x)
{
    cout << "Adresse reçue de x dans change: " << x << endl;
    cout << "Valeur de x à cette adresse avant: " << *x << endl;

    *x = 4;

    cout << "Valeur à cette adresse après: " << *x << endl;
}

int main()
{
    int a = 8;
    int *p = (&a);
    cout << "Adresse de a: " << &a << endl;
    cout << "Valeur initiale de a: " << a << endl;
    cout << "Valeur initiale de p: " << *p << endl;

    change(p);

    cout << "Valeur finale de p: " << p << endl;

    cout << "Valeur finale de a: " << a << endl;

    return 0;
}

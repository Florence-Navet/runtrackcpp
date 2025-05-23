#include <iostream>
using namespace std;

// Passage par valeur
void modifieParValeur(int x)
{
    x = 10; // Ce changement n'affectera pas la variable d'origine
}

// Passage par référence
void modifieParReference(int &x)
{
    x = 20; // Ce changement modifie la variable d'origine
}

// Passage par adresse
void modifieParAdresse(int *x)
{
    *x = 30; // Ce changement modifie aussi la variable d'origine
}

int main()
{
    int a = 0;

    cout << "Valeur initiale de a : " << a << endl;

    modifieParValeur(a);
    cout << "Après passage par valeur : " << a << endl;

    modifieParReference(a);
    cout << "Après passage par référence : " << a << endl;

    modifieParAdresse(&a);
    cout << "Après passage par adresse : " << a << endl;

    return 0;
}

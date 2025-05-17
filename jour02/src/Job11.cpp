/*
Écrire un programme en C++ permettant de calculer la factorielle d'un
nombre entier donné (n!). Par exemple : 0! = 1. Attention aux stack overflow !

*/
#include <iostream>
using namespace std;

int main()
{
    unsigned int n;              // nombre entier >= 0
    unsigned long long fact = 1; // type plus grand pour éviter débordement rapide

    cout << "Entrez un nombre entier positif : ";
    cin >> n;

    for (unsigned int i = 1; i <= n; ++i)
    {
        fact *= i;
    }

    cout << n << "! = " << fact << endl;

    return 0;
}

/*
Écrire un programme en C++ permettant de vérifier si un nombre donné est
un nombre narcissique (ou d'Armstrong) ou non.
 */

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int nombre;
    cout << "Entrez un nombre : ";
    cin >> nombre;

    int original(nombre);
    int somme(0);
    const int puissance(3);

    // Calculer la somme des cubes des chiffres
    while (original != 0)
    {
        int chiffre = original % 10;
        somme += pow(chiffre, puissance);
        original /= 10;
    }

    if (somme == nombre)
        cout << nombre << " est un nombre narcissique (puissance 3)." << endl;
    else
        cout << nombre << " n'est pas un nombre narcissique (puissance 3)." << endl;

    return 0;
}

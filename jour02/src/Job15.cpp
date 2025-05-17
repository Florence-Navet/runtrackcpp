/*
Écrire un programme en C++ permettant de générer la suite de Fibonacci
jusqu’à une limite donnée par l’utilisateur.
 */

#include <iostream>
using namespace std;

int main()
{
    int limite;
    cout << "Entrez la limite de la suite de Fibonacci : ";
    cin >> limite;

    int nombre1(0), nombre2(1), nombre3(0);

    cout << "Suite de Fibonacci jusqu'à " << limite << " : " << nombre1 << ", " << nombre2;

    while (nombre3 <= limite)
    {
        nombre3 = nombre1 + nombre2;
        if (nombre3 > limite)
            break;
        cout << ", " << nombre3;
        nombre1 = nombre2;
        nombre2 = nombre3;
    }
    cout << endl;

    return 0;
}

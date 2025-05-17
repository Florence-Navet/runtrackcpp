/*
Écrire un programme en C++ permettant d'itérer jusqu’à un entier n et vérifier
si à chaque itération est un multiple de 3 ou un multiple de 5.
*/

#include <iostream>
using namespace std;

int main()
{
    int nombre(0);

    cout << "Entrez un nombre entier: ";
    cin >> nombre;

    for (int i = 1; i <= nombre; i++)
    {
        if (i % 3 == 0 && i % 5 == 0)
        {
            cout << i << " est un multiple de 3 et de 5 " << endl;
        }
        else if (i % 3 == 0)
        {
            cout << i << " est un multiple de 3 " << endl;
        }
        else if (i % 5 == 0)
        {
            cout << i << " est un multiple de 5 " << endl;
        }
        else
        {
            cout << i << " n'est pas un multiple de 3 ou de 5 " << endl;
        }
    }
    return 0;
}

/*
Écrire un programme en C++ permettant d'afficher la table de multiplication
des nombres entiers de 1 à 10. Le résultat doit être comme suit :*/

#include <iostream>
using namespace std;

int main()
{
    int i, j;

    cout << "Table de multiplication de 1 à 10 : " << endl;

    for (i = 1; i <= 10; i++)
    {
        for (j = 1; j <= 10; j++)
        {
            cout << i * j << "\t";
        }
        cout << endl;
    }

    return 0;
}

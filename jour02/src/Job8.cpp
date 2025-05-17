/*
Écrire un programme qui affiche tous les entiers de a à b (bornes incluses)
donnés par l’utilisateur en utilisant l’instruction while.
*/

#include <iostream>
using namespace std;

int main()
{
    int nombre1(0), nombre2(0);
    cout << "Entrez le premier nombre : ";
    cin >> nombre1;
    cout << "Entrez le deuxieme nombre : ";
    cin >> nombre2;

    int i = nombre1;
    while (i <= nombre2)
    {
        cout << i << "  ";
        i++;
    }
    cout << endl;
    return 0;
}

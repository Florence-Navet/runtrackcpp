/*
Écrire un programme en C++ qui demande à l'utilisateur d’entrer un entier et
qui affiche “GAGNE” si l'entier est entre a et b, (bornes incluses) où a et b sont
des entiers naturels et a < b. Il affiche “PERDU” sinon.

*/
#include <iostream>
using namespace std;
int main()
{
    int nombre(0), borne1(0), borne2(0);
    cout << "Entrez le premier nombre : ";
    cin >> borne1;
    cout << "Entrez le deuxieme nombre : ";
    cin >> borne2;
    cout << "Entrez un entier : ";
    cin >> nombre;

    if (nombre >= borne1 && nombre <= borne2)
        cout << "GAGNE" << endl;
    else
        cout << "PERDU" << endl;

    return 0;
}
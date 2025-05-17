/*
Écrire un programme en C++ permettant de calculer la somme des n
premiers de la série harmonique ci-dessous, où n est en entrée :
 */

#include <iostream>
using namespace std;
int main()
{
    int nombre(0);
    double somme(0);
    cout << "Entrez un nombre : ";
    cin >> nombre;
    for (int i = 1; i <= nombre; i++)
    {
        somme += 1.0 / i;
    }
    cout << "La somme des " << nombre << " premiers termes de la serie harmonique est : " << somme << endl;
    return 0;
}
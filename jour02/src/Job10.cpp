/*Écrire un programme en C++ permettant de calculer la racine carrée d’un
nombre réel donné par l’utilisateur. Votre fonction devra refuser les valeurs
négatives. Le programme s’arrêtera seulement si la valeur d'entrée est égale
à 0. Exemple d'exécution :

*/
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double nombre(0);
    cout << "Entrez un nombre : ";
    cin >> nombre;
    while (nombre != 0)
    {
        if (nombre < 0)
        {
            cout << "Erreur : la valeur ne peut pas etre negative." << endl;
        }
        else
        {
            cout << "La racine carree de " << nombre << " est : " << sqrt(nombre) << endl;
        }
        cout << "Entrez un nombre : ";
        cin >> nombre;
    }
    return 0;
}

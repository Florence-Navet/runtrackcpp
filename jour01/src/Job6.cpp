/**********************************************************************
 * Écrire un programme en C++ qui affiche la table de multiplication  *
 *  d’un entier donné par l’utilisateur.                              *
 **********************************************************************/

#include <iostream>

int main()
{

    int nombre;

    std::cout << "Entrez un nombre :";
    std::cin >> nombre;

    std::cout << "\nTable de multipllication de " << nombre << "\n";

    for (int i = 1; i <= 10; i++)
    {
        std::cout << nombre << " X " << i << " = " << nombre * i << std::endl;
    }

    return 0;
}
/************************************************************
 Écrire un programme en C++ qui demande à l'utilisateur d'entrer un nombre,
puis inverse ce nombre et l'affiche à l'utilisateur. Par exemple : 12345 devient 54321.
*********************************************************/

#include <iostream>
#include <string>
#include <algorithm>

int main()
{
    std::string nombre;

    std::cout << "Entre un nombre entier : ";
    std::cin >> nombre;

    std::reverse(nombre.begin(), nombre.end());

    std::cout << "Le nombre inverse est : " << nombre << std::endl;

    return 0;
}
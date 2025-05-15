/******************************************
 * Écrire un programme qui demande à    l'utilisateur de taper un entier N et qui
    calcule la somme des cubes de 5^3 à N^3
 *******************************************/

#include <iostream>

int main() {
    int nombre;
    long long somme = 0;

    std::cout << "Entrez un entier (>=5) :";
    std::cin >> nombre;

    if (nombre < 5)  {
        std::cout << "Erreur : le nombre doit être supérieur ou égale à 5." << std::endl;
        return  1;
    }

    for (int i = 5; i<=nombre; i++) {
        somme += i * i * i;
    }

    std::cout << "La somme des cubes de 5^3 à " << nombre << " ^3 est : " << somme << std::endl;

    return 0;
    
}
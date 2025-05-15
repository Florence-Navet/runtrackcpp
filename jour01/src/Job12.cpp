/************************************************************************************
    Écrire un programme en C++ qui demande à l'utilisateur de taper cinq entiers
    et qui affiche leur moyenne. Vous êtes limités à deux variables.
*************************************************************************************/
#include <iostream>

int main() {
    int somme = 0;
    int entier;

    std::cout << "Entrez cinq entiers : "  << std::endl;
    
    for (int i = 0; i < 5; i++) {
        std::cin >> entier;
        somme += entier;
    }


    std::cout << "La moyenne est : " << (somme / 5.0) << 
    std::endl;

    return 0;
}



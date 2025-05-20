#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    srand(time(0));  // Initialisation du random

    int choixJoueur;
    std::cout << "Bienvenue dans Pierre-Papier-Ciseaux !" << std::endl;
    std::cout << "Choisissez : 1 (Pierre), 2 (Papier), 3 (Ciseaux) : ";
    std::cin >> choixJoueur;

    // Vérification de l'entrée utilisateur
    if (choixJoueur < 1 || choixJoueur > 3) {
        std::cout << "Choix invalide, veuillez entrer 1, 2 ou 3." << std::endl;
        return 1;
    }

    int choixOrdi = rand() % 3 + 1; // Génère 1, 2 ou 3

    // Affichage des choix
    std::cout << "Vous avez choisi : ";
    if (choixJoueur == 1) std::cout << "Pierre";
    else if (choixJoueur == 2) std::cout << "Papier";
    else std::cout << "Ciseaux";

    std::cout << " | L'ordinateur a choisi : ";
    if (choixOrdi == 1) std::cout << "Pierre";
    else if (choixOrdi == 2) std::cout << "Papier";
    else std::cout << "Ciseaux";

    std::cout << std::endl;

    // Détermination du gagnant
    if (choixJoueur == choixOrdi) {
        std::cout << "Égalité !" << std::endl;
    } else if ((choixJoueur == 1 && choixOrdi == 3) ||
               (choixJoueur == 2 && choixOrdi == 1) ||
               (choixJoueur == 3 && choixOrdi == 2)) {
        std::cout << "Vous gagnez !" << std::endl;
    } else {
        std::cout << "L'ordinateur gagne !" << std::endl;
    }

    return 0;
}

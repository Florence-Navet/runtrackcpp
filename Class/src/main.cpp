#include <iostream>
#include "Voiture.h"

int main() {
    Voiture maVoiture; // Création d'un objet de la classe Voiture
    maVoiture.accelerer(10.0f); // Appel de la méthode accélérer
    maVoiture.faireLePlein(); // Appel de la méthode faireLePlein

    std::cout << "Vitesse actuelle : " << maVoiture.vitesse << " km/h" << std::endl;
    std::cout << "Niveau d'essence : " << maVoiture.niveauEssence << "%" << std::endl;

    return 0;
}
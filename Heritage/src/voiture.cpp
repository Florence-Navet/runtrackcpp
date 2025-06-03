#include "voiture.h"
#include <iostream>

using std::cout;
using std::endl;

Voiture::Voiture()
{
    m_public = 4;
    m_protected = 10;
    std::cout << "Constructeur voiture\n";
    marquePneus = "Michelin";
    // type_vehicule = Voiture;
}

void Voiture::afficher()
{
    Vehicule::afficher();
    std::cout << "Je suis un voiture\n";
    std::cout << "Je suis la plus belle voiture\n";
}

void Voiture::effectuerEntretien()
{
    std::cout << "Entretien de la voiture \n";
}

void Voiture::changerPneus()
{
    std::cout <<"changement des pneus  : " <<marquePneus << "\n";
}
// 💡 Spécialisation template pour afficher des valeurs booléennes
template<>
void Voiture::afficher<bool>() {
    for (int i = 0; i < this->getLength(); i++) {
        std::cout << (data[i] ? "1" : "0") << " ";
    }
    std::cout << std::endl;
}
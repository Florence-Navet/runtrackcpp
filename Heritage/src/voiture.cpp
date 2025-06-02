#include "voiture.h"
#include <iostream>

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

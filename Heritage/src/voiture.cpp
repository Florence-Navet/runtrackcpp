#include "voiture.h"
#include <iostream>

Voiture::Voiture()
{
    m_public = 4;
    m_protected = 10;
    std::cout << "Constructeur voiture\n";
}

void Voiture::afficher()
{
    Vehicule::afficher();
    std::cout << "Je suis un voiture\n";
}

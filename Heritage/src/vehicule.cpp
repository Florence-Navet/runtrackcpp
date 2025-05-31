#include "vehicule.h"
#include <iostream>

Vehicule::Vehicule()
{
    std::cout << "Constructeur véhicule\n";
}

float Vehicule::vitesse()
{
    return m_vitesse;
}

int Vehicule::autonomie()
{
    return m_autonomie;
}

short Vehicule::nbRoues()
{
    return m_nb_roues;
}

void Vehicule::afficher()
{
    std::cout << "Je suis un véhicule\n";
}
void Vehicule::effectuerEntretien()
{
    std::cout << "Faire l'entretien du vehicule : \n";
}

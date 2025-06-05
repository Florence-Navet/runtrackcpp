#include "vehicule.h"
#include <iostream>


Vehicule::Vehicule()
{
    std::cout << "Constructeur véhicule\n";
    nb++;
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
float Vehicule::convertirKmEnNoeuds(float vitesse_en_kmh)
{
    return vitesse_en_kmh * 0.539957;
}
void Vehicule::effectuerEntretien()
{
    std::cout << "Faire l'entretien du vehicule # : "<<nb<<"\n";
}

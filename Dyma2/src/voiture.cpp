#include "voiture.h"
#include <iostream>
#include <exception>

Voiture::Voiture(std::string marque, int nbRoues) : m_marque{marque},
                                                    m_nb_roues{nbRoues}
{
    std::cout << "Ceci est le constructeur\n";
    std::cout << "Cette voiture est de marque : "
              << m_marque << " et possède "
              << nbRoues << " roues\n";
    m_mon_pointeur = new int;
}

Voiture::Voiture(int nb_roues, short fuel_level) : m_nb_roues{nb_roues},
                                                   m_fuel_level{fuel_level}

{
}

Voiture::Voiture(const Voiture &Voiture) : m_nb_roues{Voiture.m_nb_roues}, m_fuel_level{Voiture.m_fuel_level}
{
    std::cout << "Constructeur de copie appelée\n";
}

Voiture::Voiture(int nb_roues, short fuel_level, float speed)
{
    std::cout << "J'aime ma voiture avec " << nb_roues << "roues" << " qui roule à " << speed << " km/h\n";
}

Voiture::~Voiture()
{
    delete m_mon_pointeur;
    std::cout << "Ceci est le destructeur de la voiture : "
              << m_marque << "\n";
    // base_de_donnees.disconnect();
}

float Voiture::accelerate(float delta)
{
    return 0.0f;
}

void Voiture::fillUp()
{
}

void Voiture::printVoiture()
{
    std::cout << "Cette voiture possède " << m_nb_roues << " roues et un niveau d'essence de " << m_fuel_level << "\n";
}

const int &Voiture::nb_roues() const
{
    // TODO: insert return statement here
}

void Voiture::setNbRoues(int nb_roues)
{
    if (nb_roues > 0 & nb_roues < 8)
    {
        // recalculer capacite voiture
        fillUp();
        m_nb_roues = nb_roues;
    }
}

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

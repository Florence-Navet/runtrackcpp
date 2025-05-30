#include "voiture.h"
#include <iostream>
#include <exception>

Voiture::Voiture(std::string marque, int nbRoues) : Voiture{nbRoues, 55}
{
    std::cout << "Ceci est le constructeur\n";
    std::cout << "Cette voiture est de marque : "
              << m_marque << " et possède "
              << nbRoues << " roues\n";
    // std::cout << "J'aime ma voiture avec " << nbRoues << " roues\n";
    // m_mon_pointeur = new int;
    // std::cout << "J'aime ma voiture avec " << nbRoues << "roues";
};

Voiture::Voiture(int nbRoues, short fuelLevel) : Voiture{nbRoues, fuelLevel, 80}
{
    // std::cout << "J'aime ma voiture avec " << nbRoues << " roues\n";
}
Voiture::Voiture(int nbRoues, short fuelLevel, float speed)
{
    std::cout << "J'aime ma voiture avec " << nbRoues << " roues\n";
}
/// @brief constructeur de copie du constructeur Voiture(int nbRoues, short fuelLevel);
/// @param Voiture pour recopier nbroues et niveau fuel
Voiture::Voiture(const Voiture &Voiture) : m_nbRoues{Voiture.m_nbRoues}, m_fuelLevel{Voiture.m_fuelLevel}
{
    std::cout << "Constructeur de copie appelée\n";
}

Voiture::~Voiture()
{
    // delete m_mon_pointeur;
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
    std::cout << "Cette voiture possède " << m_nbRoues << " roues et un niveau d'essence de " << m_fuelLevel << "\n";
}

const int &Voiture::nb_roues() const
{
    std::cout << "Cette voiture possède " << m_nbRoues << "roues \n";
    return m_nbRoues;
}

void Voiture::setNbRoues(int nbRoues)
{
    if (nbRoues > 0 & nbRoues < 8)
    {
        // recalculer capacite voiture
        fillUp();
        m_nbRoues = nbRoues;
    }
}

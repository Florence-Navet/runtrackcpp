#include "moto.h"
#include <iostream>

Moto::Moto()
{
    std::cout << "Constructeur Moto\n";
}
void Moto::afficher()
{
    Vehicule::afficher();
    std::cout << "Je suis une moto\n";
}
void Moto::effectuerEntretien()
{
    std::cout << "Entretien de ma moto \n";
}
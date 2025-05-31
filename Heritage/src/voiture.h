#ifndef VOITURE_H
#define VOITURE_H

#include "vehicule.h"
#include "rouge.h"

class Voiture : public Vehicule, public Rouge
{
public:
    Voiture();
    void afficher();
    void effectuerEntretien();
};

#endif // VOITURE_H

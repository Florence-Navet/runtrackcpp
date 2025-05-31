#ifndef MOTO_H
#define MOTO_H

#include "vehicule.h"

class Moto : public Vehicule
{
public:
    Moto();
    void afficher();
    void effectuerEntretien();
};

#endif // MOTO_H

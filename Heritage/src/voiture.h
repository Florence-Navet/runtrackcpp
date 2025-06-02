#ifndef VOITURE_H
#define VOITURE_H


#include "vehicule.h"
#include "rouge.h"
#include <string>

class Voiture : public Vehicule, public Rouge
{

    public:
    Voiture();
    void afficher();
    void effectuerEntretien();
    void changerPneus();

    private:
    std::string marquePneus;
};

#endif // VOITURE_H

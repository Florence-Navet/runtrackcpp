#include "vehicule.h"
#include "rouge.h"

class Voiture : public Vehicule, public Rouge
{
public:
    Voiture();
    void afficher();
};
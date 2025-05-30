#include <iostream>
#include "voiture.h"

using std::cout;
using std::endl;

int main()
{
    // Voiture renault_zoe("Renault", 6);
    // Voiture renault_kevin("Corvette", 3);
    // Voiture *Porsche_rouge = new Voiture("Porsche", 5);

    Voiture renault_adeline{5, 75};
    Voiture renault_adeline1{2, 25};
    Voiture renault_adeline2{1, 20};
    Voiture renault_adeline3{4, 35};
    renault_adeline.printVoiture();
    Voiture voiture2{renault_adeline};
    voiture2.printVoiture();

    // renault_zoe.accelerate(10.5);

    // renault_zoe.fillUp();

    // renault_zoe.nb_roues(6);

    // cout << "Nb de roues :" << renault_zoe.nb_roues();

    // Voiture *fiat_punto = new Voiture();
    // fiat_punto->marque = "Fiat ";
    // fiat_punto->fillUp();

    // delete Porsche_rouge;

    return 0;
}
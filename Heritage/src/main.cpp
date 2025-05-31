#include <iostream>
#include "voiture.h"
#include "rouge.h"
#include "moto.h"

using std::cout;
using std::endl;

void checkupAvantVente(Vehicule &Saya)
{
    Saya.effectuerEntretien();
}

int main()
{

    // kevin.afficher();
    // Voiture voiture;
    // voiture.afficher();
    // Voiture adeline;
    // voiture.Colorer();

    // voiture.effectuerEntretien();
    // julien.effectuerEntretien();

    // virtual void effectuerEntretien();
    // Voiture skala;
    // skala.afficher();
    Voiture kevin;
    Moto julien;
    checkupAvantVente(kevin);
    checkupAvantVente(julien);

    return 0;
}

#include <iostream>
#include "constantes.h"

using std::cout;
using std::endl;

enum class Couleur {
    rouge,
    vert,
    jaune,
    orange
};

struct Voiture {
    int nb_roues {4};
    std::string marque;
    Couleur couleur {Couleur::vert};  
    mutable float niveau_essence {100};
    mutable double vitesse_en_km {0};
};

int main() {
    const Voiture punto {4, "Fiat", Couleur::jaune};  

    punto.vitesse_en_km = 100;
}

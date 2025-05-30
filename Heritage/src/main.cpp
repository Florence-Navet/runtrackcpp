#include <iostream>
#include "voiture.h"
#include "rouge.h"

using std::cout;
using std::endl;

int main()
{
    Vehicule kevin;
    kevin.afficher();
    Voiture voiture;
    voiture.afficher();
    Voiture adeline;
    voiture.Colorer();

    return 0;
}
#include <iostream>
#include "voiture.h"
#include "rouge.h"
#include "moto.h"
#include <vector>



using std::cout;
using std::endl;

void checkupAvantVente(Vehicule &Saya)
{
    Saya.effectuerEntretien();
}

int main()
{
    std::setlocale(LC_ALL, ".utf8");
    // std::vector<Vehicule*> liste_vehicule;
    // Vehicule* a = new Vehicule;
    // Moto* b = new Moto;
    // Voiture* c = new Voiture;
    // liste_vehicule.push_back(a);
    // liste_vehicule.push_back(b);
    // liste_vehicule.push_back(c);

    // cout << liste_vehicule.size() << "\n";

    // Vehicule* dernier_element = liste_vehicule.at(2);
    // if(ma_nouvelle_voiture->type_vehicule == Voiture ){

    // }else if (ma_nouvelle_voiture->type_vehicule == Moto) {

    // }


    // Voiture* ma_nouvelle_voiture = dynamic_cast<Voiture*>(dernier_element);
    // ma_nouvelle_voiture->changerPneus();
    // kevin.afficher();
    // Voiture voiture;
    // voiture.afficher();
    // Moto moto;
    // moto.afficher();
    // Voiture voiture2;
    // voiture2.afficher();
    // Moto moto2;
    // moto2.afficher();
    // Vehicule::nb++;
    // Vehicule::nb = 10;
    // std::cout<<"Nb vaut :" <<Vehicule::nb;
    std::cout<<"Noeuds:"<<Vehicule::convertirKmEnNoeuds(15);
    
    // voiture.afficher();
    // Voiture adeline;
    // voiture.Colorer();

    // voiture.effectuerEntretien();
    // julien.effectuerEntretien();

    // virtual void effectuerEntretien();
    // Voiture skala;
    // skala.afficher();
    // Voiture kevin;
    // Moto julien;
    // checkupAvantVente(kevin);
    // checkupAvantVente(julien);

    return 0;
}

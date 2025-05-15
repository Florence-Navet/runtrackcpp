/*********************************************************************************************
 *                                                                                              
 *Vous êtes marchand de fruits et légumes à Noailles. Vous avez besoin d’un programme qui 
 affiche le prix TTC de vos produits frais. Écrire un programme en C++ qui demande à 
 l'utilisateur de taper le prix HT d'un kilo de carottes, le nombre de kilos de carottes, 
 le taux de TVA (ex : 15 %). Le programme doit afficher le prix TTC d’une marchandise donnée.

 ********************************************************************************************/

#include <iostream>

int main() {

    double prixHT, kilos, tva;

    std::cout << "Entrez le prix HT d'un kilo de carottes (€) : ";
    std::cin >> prixHT;

    std::cout << "Entrez le nombre de kilos de carottes :";
    std::cin >> kilos;

    std::cout << "Entrez le taux de TVA (%) :";
    std::cin >> tva;

    //calcul du prix TTC

    double tauxTVA = 1 + tva / 100;
    double prixTTC = prixHT * kilos * tauxTVA;


    std::cout << "Le prix TTC est : " << prixTTC << " € " << std::endl;
        
        return 0;
}

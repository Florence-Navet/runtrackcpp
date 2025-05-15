/*Écrire un programme en C++ permettant de multiplier deux nombres et
d'afficher leur produit.*/
#include <iostream>


int main()

{
        int nombre1, nombre2, produit;

        std::cout << "Entrez le premier nombre 1 :";
        std::cin >> nombre1;

        std::cout << "Entrez le premier nombre 2:";
        std::cin >> nombre2;

        produit = nombre1 * nombre2;

        std::cout << "Le produit de  " << nombre1 << " et  " <<nombre2 << " est : " << produit << std::endl;


            return 0;




   }



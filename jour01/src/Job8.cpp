/******************************************************************************
Écrire un programme qui demande à l'utilisateur d'entrer une année, puis
détermine si cette année est bissextile ou non. Par exemple, les années 2020,
2024 et 2028 sont bissextiles, mais les années 1900, 2100, 2200 ne le sont pas.
*********************************************************************************/

#include <iostream>

int main() {

    int annee;
    

        std::cout << "Entrez une annee :";
        std::cin >> annee;

        if ((annee % 4 == 0 && annee % 100 != 0) || (annee % 400 == 0)) {
           std::cout << annee << " est une année bissextile." << std::endl;
        } else {
            std::cout << annee << " n'est pas une année bissextile." << std::endl;
        }



    
        
        return 0;

}

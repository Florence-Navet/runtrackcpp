/********************************************************************************************
 * Écrire un programme en C++ qui permet d'afficher le plus grand de trois
entiers saisis par l’utilisateur.
 *********************************************************************************************/

#include <iostream>

int main() {

    int nombre1, nombre2, nombre3;
    

        std::cout << "Entrez le premier nombre 1 :";
        std::cin >> nombre1;

        std::cout << "Entrez le premier nombre 2:";
        std::cin >> nombre2;

        std::cout << "Entrez le premier nombre 3:";
        std::cin >> nombre3;

        int maximum = nombre1;

        if (nombre2 > nombre1)
            maximum = nombre2;
        if (nombre3 > maximum)
            maximum = nombre3;

        std::cout << "Le plus grand des trois nombre est :" << maximum << std::endl;
     










    
        
        return 0;

}

/*************************************************************************************
 * Écrire un programme en C++ qui permet d'échanger le contenu de deux
    entiers n et m saisis par l'utilisateur, puis et afficher ces entiers avant et après
    l’échange.
 **********************************************************************************/
#include <iostream>

int main() {

    int nombreN, nombreM;

    std::cout << "Entrez le nombre N : ";
    std::cin >> nombreN;

    std::cout << "Entrez le nombre M:";
    std::cin >> nombreM;

  


    std::cout << "Avant l'échange : nombre M = " << nombreM << ", nombre N = " << nombreN << std::endl;


    //Echnage des valeurs

    int temp = nombreM;
    nombreM = nombreN;
    nombreN = temp;



    std::cout << "Après l'échange : nombre M = " << nombreM << ", nombre N = " << nombreN << std::endl;


        
        return 0;
}

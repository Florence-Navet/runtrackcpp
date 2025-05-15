
// inclusion d'une bibliotheque d'en-tete
#include <iostream>

int main()
/*std pour standard*/
{

    std::cout << "Ceci est un message d'information" << std::endl;
    std::cerr << "Ceci est un message d'erreur" << std::endl;
    std::clog << "Ceci est un message de log" << std::endl;
    std::cout << "ce message provient du fichier  " <<__FILE__<< "et de la ligne "<<__LINE__<<" le "<<__DATE__<<" a l'heure "<<__TIME__;


}

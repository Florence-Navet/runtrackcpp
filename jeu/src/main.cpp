#include <iostream>
#include <stdlib.h>
// #include <cstdlib>
#include <ctime>
#include "utils.h"


/**
 * @brief fcs qui renvoit la liste des different choix
 * 0 : quitter
 * 1 : Pierre
 * 2 : Feuille 
 * 3: Ciseaux
 */
void ecrireInstructions(){

}

/**
 * @brief Affiche dans la console le nom du gagnant du coup
 * 
 * @param vainqueur 
 */
void afficherResultats(Vainqueur vainqueur){

}


/**
 * @brief definit dqui de l'ordi ou de l'humain a ggné
 * 
 * @param coup_humain coup joué par humain 
 * @param coup_ordinateur coup joué par ordinateur
 * @return Vainqueur 
 */
void definirGagnant(Geste coup_humain, Geste coup_ordinateur){


}
/**
 * @brief Obtient un geste aléatoire grâce rand
 * 
 * @return Geste joué par l'ordinateur
 */
Geste obtenirGesteAleatoire(){
   auto random_value {rand()%3};
  return static_cast<Geste>(random_value);

}

int main() {



//melanger l'aleatoire
std::srand(time(nullptr));
std::setlocale(LC_ALL, ".utf8");

  int choix_utilisateur{0};
  auto score_ordinateur{0}, score_humain{0};
 

    do
    {
      Geste coup_ordinateur;
      ecrireInstructions();
      std::cin>>choix_utilisateur;
     Geste coup_humain { static_cast<Geste>(choix_utilisateur - 1) };
     
     if (choix_utilisateur < 0 || choix_utilisateur > 3) {
      std:: cout << "entrée invalide !! Recommencez "<<std::endl;
      continue;
     }
     if (choix_utilisateur == 0) {
      break;
     }
     
      coup_ordinateur = obtenirGesteAleatoire();
      std::cout<<"Ordi joue "<<static_cast<int>(coup_ordinateur)<<" et coup humain " << static_cast<int>(coup_humain )<< std::endl;
      // Vainqueur gagnant {definirGagnant(coup_humain, coup_ordinateur)};
      // afficherResultats(gagnant);

    } while (choix_utilisateur != 0);
    

    return 0;
}


    // std::srand(static_cast<unsigned int>(std::time(nullptr))); // Initialisation de rand()
       
    // for (int i = 0; i < 20; i++) {
    //     int random_value = std::rand(); // Nouvelle valeur aléatoire à chaque tour
    //     std::cout << random_value << std::endl;
    // }
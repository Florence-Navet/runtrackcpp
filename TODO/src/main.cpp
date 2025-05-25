#include "task_manager.h"
#include <vector>
#include <iostream>

using std::cout;
using std::endl;


int main()
{
    
    std::vector<Tache> taches;
    chargerTachesDepuisCSV(taches);

    int choix;

    do
    {
        std::setlocale(LC_ALL, ".utf8");
        afficherMenu();
        std::cout << "Quel est votre choix : ";
        std::cin >> choix;

        switch (choix)
        {
        case 1:
            ajouterTache(taches);
            break;
        case 2:
            supprimerTache(taches);
            break;
        case 3:
            afficherTaches(taches);
            break;
        case 4:
            marquerTacheTerminee(taches);
            break;
        case 5:
            editerTache(taches);
            break;
        case 6:
            sauvegarderTachesCSV(taches);
            std::cout << " Votre tâche a bien été sauvegardée.  A bientôt !!" << std::endl;
            break;
        default:
            std::cout << "Choix invalide. (choix entre 1 à 6." << std::endl;
        }

    } while (choix != 6);
    return 0;
}
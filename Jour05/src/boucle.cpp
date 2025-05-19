#include <iostream>

int main() {
    int i;

    while (true) {
        std::cout << "Entrez un nombre (1, 2, 3 ou 4 pour quitter) : ";
        std::cin >> i;

        switch (i) {
            case 1:
                std::cout << "Case 1: continue la boucle (ignore le reste de cette iteration)" << std::endl;
                continue;  // passe à l'itération suivante de la boucle while

            case 2:
                std::cout << "Case 2: break du switch, puis affichage avant la boucle suivante" << std::endl;
                break;  // sort du switch, la boucle continue

            case 3:
                std::cout << "Case 3: return, fin du programme" << std::endl;
                return 0;  // quitte main, donc fin du programme

            default:
                if (i == 4) {
                    std::cout << "Case 4: goto pour sortir de la boucle." << std::endl;
                    goto fin_boucle;
                }
                std::cout << "Nombre non pris en charge, recommencez." << std::endl;
                break;
        }

        std::cout << "Fin d'une iteration de la boucle." << std::endl;
    }

fin_boucle:
    std::cout << "Sortie de la boucle via goto. Fin du programme. coucou chouquette." << std::endl;
    return 0;
}

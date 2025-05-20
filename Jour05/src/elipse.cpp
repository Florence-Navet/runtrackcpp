#include <iostream>
#include <cstdarg>

using std::cout;
using std::endl;

// Fonction avec un nombre indéfini d'arguments
float calculerMoyenne(int count, ...) {
    if (count == 0) return 0.0f;  // Éviter la division par zéro

    float somme = 0.0f;
    std::va_list list;  // Initialisation d'une liste de variables

    va_start(list, count);  // Démarrer la récupération des arguments

    for (int i = 0; i < count; i++) {  
        somme += va_arg(list, int);  // Extraire un argument de type int
    }

    va_end(list);  // Fin de la récupération

    return somme / count;  // Calcul de la moyenne
}

int main() {
    cout << "Moyenne de 3, 5, 7 : " << calculerMoyenne(3, 3, 5, 7) << endl;
    cout << "Moyenne de 10, 20, 30, 40 : " << calculerMoyenne(4, 10, 20, 30, 40) << endl;
    cout << "Moyenne avec aucun argument : " << calculerMoyenne(0) << endl;

    return 0;
}

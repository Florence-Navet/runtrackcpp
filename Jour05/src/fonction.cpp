#include <iostream>

// Passage par valeur : la variable originale ne change pas
void doublerValeur(int a) {
    a *= 3;
    std::cout << "Dans doublerValeur : a (modifié) = " << a << std::endl;
}

// Passage par référence : la variable originale est modifiée
void doublerReference(int& a) {
    a *= 2;
}

// Passage par adresse : la variable originale est modifiée via un pointeur
void doublerAdresse(int* a) {
    *a *= 4;
}

int main() {
    int a = 5;

    std::cout << "Avant l'appel des fonctions : a = " << a << std::endl;

    doublerValeur(a); // Ne modifie pas a
    std::cout << "Après doublerValeur : a = " << a << " (inchangé)" << std::endl;

    doublerReference(a); // Modifie a
    std::cout << "Après doublerReference : a = " << a << std::endl;

    doublerAdresse(&a); // Modifie a
    std::cout << "Après doublerAdresse : a = " << a << std::endl;

    return 0;
}

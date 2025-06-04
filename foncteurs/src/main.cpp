#include <algorithm>
#include <vector>
#include <iostream>

// Définition d'un foncteur
struct Greater {
    bool operator()(int a, int b) const {
        return a > b;
    }
};

int main() {
        std::setlocale(LC_ALL, ".utf8");
    // Création d'un vecteur d'entiers
    std::vector<int> numbers = {5, 2, 8, 1, 6};

    // Tri du vecteur dans l'ordre décroissant en utilisant le foncteur Greater
    std::sort(numbers.begin(), numbers.end(), Greater());

    // Affichage des éléments triés
    std::cout << "Après le tri : ";
    for (int num : numbers) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}
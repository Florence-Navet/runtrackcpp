
/**
 * pour decaler un bitset de 4 bits
 * std::bitset<4> bits;
 * 
 */
 * 


#include <algorithm>
#include <vector>
#include <iostream>

int main() {
    std::setlocale(LC_ALL, ".utf8");
    // Création d'un vecteur d'entiers
    std::vector<int> numbers = {5, 2, 8, 1, 6};

    // Utilisation de std::find_if avec une fonction lambda pour trouver le premier nombre pair
    auto it = std::find_if(numbers.begin(), numbers.end(), [](int n) {
        return n % 2 == 0;
    });

    if (it != numbers.end()) {
        std::cout << "Premier nombre pair trouvé : " << *it << std::endl;
    } else {
        std::cout << "Aucun nombre pair trouvé" << std::endl;
    }

    return 0;
}
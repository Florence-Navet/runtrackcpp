#include <algorithm>
#include <vector>
#include <iostream>

int main() {
    std::setlocale(LC_ALL, ".utf8");
    // Création d'un vecteur d'entiers
    std::vector<int> numbers = {5, 2, 8, 1, 6};

    // Variable à capturer
    int divisor = 3;

    // Utilisation de std::find_if avec une fonction lambda qui capture une variable
    auto it = std::find_if(numbers.begin(), numbers.end(), [divisor](int n) {
        return n % divisor == 0;
    });

    if (it != numbers.end()) {
        std::cout << "Premier nombre divisible par " << divisor << " trouvé : " << *it << std::endl;
    } else {
        std::cout << "Aucun nombre divisible par " << divisor << " trouvé" << std::endl;
    }

    return 0;
}
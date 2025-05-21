#include <iostream>

class Voiture {
public:
    int roues;

    Voiture(int n) : roues(n) {}
};

int main() {
    Voiture maVoiture(4);

    // auto déduit que 'nombreDeRoues' est un int
    auto nombreDeRoues = maVoiture.roues;

    std::cout << "La voiture a " << nombreDeRoues << " roues." << std::endl;

    return 0;
}


    // std::srand(static_cast<unsigned int>(std::time(nullptr))); // Initialisation de rand()
       
    // for (int i = 0; i < 20; i++) {
    //     int random_value = std::rand(); // Nouvelle valeur aléatoire à chaque tour
    //     std::cout << random_value << std::endl;
    // }
#include <iostream>

using std::cin;
using std::cout;
using std::endl;

enum class Couleur {
    jaune,
    bleu,
    violet,
    gris,
    vert
};

enum class CouleurCiel {
    jaune,
    vert, 
    violet
};

int main() {
    // float a (1.0/3.0);

    Couleur couleur (Couleur::vert);

    std::cout << static_cast<int>(Couleur::bleu) << std::endl 
              << static_cast<int>(Couleur::jaune) << std::endl;




    return 0;
}

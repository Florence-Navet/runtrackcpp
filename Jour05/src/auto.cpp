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

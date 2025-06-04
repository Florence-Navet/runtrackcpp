/**transfert de responsabilité */

#include <iostream>
#include <memory>

class Fraction {
public:
    int num, den;
    Fraction(int n, int d) : num(n), den(d) {
        std::cout << "Constructeur de fraction\n";
    }
    ~Fraction() {
        std::cout << "Destructeur de fraction\n";
    }
    void afficher() const {
        std::cout << num << "/" << den << "\n";
    }
};

int main() {
    std::unique_ptr<Fraction> pf1 = std::make_unique<Fraction>(3, 4);
    std::unique_ptr<Fraction> pf2 = std::move(pf1);

    if (pf1) {
        pf1->afficher();
    } else {
        std::cout << "pf1 est nul\n";
    }

    if (pf2) {
        pf2->afficher();
    } else {
        std::cout << "pf2 est nul\n";
    }

    return 0;
}
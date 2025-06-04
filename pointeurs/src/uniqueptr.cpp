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
    std::unique_ptr<Fraction> pf = std::make_unique<Fraction>(3, 4);
    pf->afficher();
    return 0;
}
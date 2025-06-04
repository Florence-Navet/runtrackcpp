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
    std::shared_ptr<Fraction> pf1 = std::make_shared<Fraction>(3, 4);
    {
        std::shared_ptr<Fraction> pf2 = pf1;
        std::shared_ptr<Fraction> pf3 = pf1;
        std::cout << "Nombre de shared_ptr vers fraction: " << pf1.use_count() << "\n";
        pf2->afficher();
        pf3->afficher();
    }
    std::cout << "Nombre de shared_ptr vers fraction après destruction de pf2 et pf3: " << pf1.use_count() << "\n";
    return 0;
}
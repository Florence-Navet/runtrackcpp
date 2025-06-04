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
    std::weak_ptr<Fraction> wf1 = pf1;

    if (auto sp = wf1.lock()) {
        sp->afficher();
        std::cout << "Nombre de shared_ptr vers fraction: " << sp.use_count() << "\n";
    } else {
        std::cout << "Fraction a été détruite\n";
    }

    return 0;
}
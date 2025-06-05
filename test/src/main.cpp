#include <iostream>
#include <string>

// Classe de base Ennemi
class Ennemi {
public:
    virtual ~Ennemi() {}
    virtual void AfficherStats() const = 0;
};

// Ennemi rapide
class EnnemiRapide : public Ennemi {
public:
    void AfficherStats() const override {
        std::cout << "Ennemi Rapide : PV = 50, Vitesse = 10\n";
    }
};

// Ennemi Tank
class EnnemiTank : public Ennemi {
public:
    void AfficherStats() const override {
        std::cout << "Ennemi Tank : PV = 200, Vitesse = 2\n";
    }
};

// Ennemi Normal
class EnnemiNormal : public Ennemi {
public:
    void AfficherStats() const override {
        std::cout << "Ennemi Normal : PV = 100, Vitesse = 5\n";
    }
};

// Fabrique de base (Factory Method)
class FabriqueEnnemi {
public:
    virtual ~FabriqueEnnemi() {}
    virtual Ennemi* CreerEnnemi() const = 0;
};

// Fabrique pour Ennemi Rapide
class FabriqueRapide : public FabriqueEnnemi {
public:
    Ennemi* CreerEnnemi() const override {
        return new EnnemiRapide();
    }
};

// Fabrique pour Ennemi Tank
class FabriqueTank : public FabriqueEnnemi {
public:
    Ennemi* CreerEnnemi() const override {
        return new EnnemiTank();
    }
};

// Fabrique pour Ennemi Normal
class FabriqueNormal : public FabriqueEnnemi {
public:
    Ennemi* CreerEnnemi() const override {
        return new EnnemiNormal();
    }
};

// Le code client utilise la fabrique sans connaître le type d’ennemi exact
void GenererEtAfficher(const FabriqueEnnemi& fabrique) {
    Ennemi* ennemi = fabrique.CreerEnnemi();
    ennemi->AfficherStats();
    delete ennemi;
}

int main() {
    std::cout << "Création d'un Ennemi Rapide:\n";
    FabriqueRapide fr;
    GenererEtAfficher(fr);

    std::cout << "\nCréation d'un Ennemi Tank:\n";
    FabriqueTank ft;
    GenererEtAfficher(ft);

    std::cout << "\nCréation d'un Ennemi Normal:\n";
    FabriqueNormal fn;
    GenererEtAfficher(fn);

    std::cout << "bidule\n";
    FabriqueEnnemi bidule;
    GenererEtAfficher(bidule);


    return 0;
}

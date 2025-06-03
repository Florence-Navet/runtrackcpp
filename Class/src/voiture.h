#ifndef VOITURE_H
#define VOITURE_H

class Voiture {
public:
    // Constructeur
    Voiture();

    // Méthodes
    void accelerer(float delta);
    void faireLePlein();

    // Attributs
    int m_nombreRoues;
    short m_niveauEssence;
    float m_vitesse;

private:
    void init(); // Méthode d'initialisation
};

#endif // VOITURE_H
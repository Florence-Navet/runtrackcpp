class Voiture {
private:
    int m_niveauEssence;
    int m_vitesse;
    int m_nombrePassagers;

public:
    Voiture() : m_niveauEssence(0), m_vitesse(0), m_nombrePassagers(0) {}

    int getNiveauEssence() const {
        return m_niveauEssence;
    }

    void setNiveauEssence(int niveau) {
        if (niveau >= 0 && niveau <= 100) {
            m_niveauEssence = niveau;
        } else {
            throw std::invalid_argument("Niveau d'essence invalide !");
        }
    }

    int getVitesse() const {
        return m_vitesse;
    }

    void accelerer(int increment) {
        m_vitesse += increment;
    }

    void freiner(int decrement) {
        m_vitesse -= decrement;
    }

    int getNombrePassagers() const {
        return m_nombrePassagers;
    }

    void ajouterPassager() {
        ++m_nombrePassagers;
    }

    void retirerPassager() {
        --m_nombrePassagers;
    }
};
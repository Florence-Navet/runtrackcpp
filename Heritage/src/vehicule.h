class Vehicule

{
public:
    int m_public;

private:
    float m_vitesse{0};
    int m_autonomie{500}; // exprimé en kilomètre
    short m_nb_roues{0};

protected:
    int m_protected{0}; // accessible prive et enfants
public:
    Vehicule();
    float vitesse();
    int autonomie();
    short nbRoues();

    void afficher();
};
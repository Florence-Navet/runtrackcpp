#ifndef __VOITURE_H__
#define __VOITURE_H__
#include <string>

class Voiture
{

public:
    /// @brief Constructeurs
    /// @param marque
    /// @param nbRoues
    Voiture(std::string marque, int nbRoues);
    Voiture(int nbRoues, short fuelLevel);
    Voiture(const Voiture &Voiture);
    Voiture(int nbRoues, short fuelLevel, float speed);

    ~Voiture() noexcept;

    float accelerate(float delta);
    void fillUp();
    void printVoiture();

    // accesseurs et mutateurs
    const int &nb_roues() const;
    void setNbRoues(int nbRoues);

private:
    // ATtributes
    int m_nbRoues{4};
    short m_fuelLevel{100};
    float m_speed{0};
    std::string m_marque{"Fiat"};
    // int *m_mon_pointeur;
};

#endif
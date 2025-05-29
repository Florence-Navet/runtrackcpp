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
    ~Voiture() noexcept;

    float accelerate(float delta);
    void fillUp();

    // accesseurs et mutateurs
    const int &nb_roues() const;
    void setNbRoues(int nb_roues);

private:
    // ATtributes
    int m_nb_roues{4};
    short m_fuel_level{100};
    float m_speed{0};
    std::string m_marque{"Fiat"};
    int *m_mon_pointeur;
};

#endif
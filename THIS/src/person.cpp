#include "person.h"
#include <iostream>

void Person::setAge(const int age)
{
    if (age >= 0)
    {
        this->m_age = age; // ← point-virgule ajouté ici
    }
    else
    {
        std::cerr << "Age incorrect\n";
    }
}

void Person::afficherAge()
{
    std::cout << "J'ai " << this->m_age << " ans" << std::endl;
}
/// @brief This pour pointer une variable en particulier
void Person::reset()
{
    *this = {};
}

Person &Person::ajouter(int value)
{
    m_age += value;
    return *this;
}

Person &Person::retirer(int value)
{
    m_age -= value;
    return *this;
}

// chainage de fonction

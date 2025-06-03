#include <iostream>
#include <stdexcept>

template <typename T, int taille>
class Tableau
{
private:
    T* m_data{};

public:
    // Constructeur
    Tableau();

    // Destructeur
    ~Tableau();

    void erase();
    T& operator[](int index);
    int getLength() const;
    void afficher();
};

// Implémentation du constructeur
template<typename T, int taille> 
Tableau<T, taille>::Tableau() {
    m_data = new T[taille] {};
}

// Implémentation du destructeur
template<typename T, int taille> 
Tableau<T, taille>::~Tableau() {
    delete[] m_data;
}

// Effacer le tableau
template<typename T, int taille>
void Tableau<T, taille>::erase() {
    delete[] m_data;
    m_data = nullptr;
}

// Retourne la taille du tableau
template<typename T, int taille>
int Tableau<T, taille>::getLength() const {
    return taille;  // Utilisation directe du paramètre `taille`
}

// Affichage du tableau
template<typename T, int taille>
void Tableau<T, taille>::afficher() {
    for (int i = 0; i < taille; i++) {  // Correction de la boucle
        std::cout << m_data[i] << " ";
    }
    std::cout << std::endl;
}

// Surcharge de l'opérateur []
template<typename T, int taille>
T& Tableau<T, taille>::operator[](int index)
{
    if (index < 0 || index >= taille) {
        throw std::overflow_error("Error !");
    }
    return m_data[index];
}
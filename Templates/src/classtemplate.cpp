#include <iostream>
#include <stdexcept>
#include <array>
#include "tableau.h"

using std::cout;
using std::endl;

// template <typename T>
// T& Tableau<T>::operator[](int index){
//     if (index < 0 || index >= m_length) {
//         throw std::overflow_error("Error !");
//     }
//     return m_data[index];  // Correction de la syntaxe
// }

int main() {

    const int taille {5};
    //preciser le genre qu'on veut dans le tableau int, double, float....
    Tableau<double, taille> t;
    // std::array<double, taille>t;

    // for (int i = 0; i <  taille; i++) {
    //     t[i] = i*2;
    // }

    t[0] = 1.1;
    t[1] = 2.2;
    t[2] = 3.3;
    t[3] = 4.4;
    t[4] = 5.5;
    t.afficher();


    return 0;
}

/**
 * @file puissance.cpp
 * @author your name (enolaworld@gmail.com)
 * @brief fichier qui continer la puissance d'un entier
 * @version 0.1
 * @date 2025-05-16
 *
 * @copyright Copyright (c) 2025
 *
 */

#include <iostream>

using std::cin;
using std::cout;
using std::endl;

struct Fraction {
    int numerateur{0};
    int denominateur{1};
};

Fraction multiplierParDeux(Fraction f) {
    f.numerateur *= 2;
    return f;
}

int main() {
    // float a (1.0/3.0);

    Fraction fra{10, 3};
    fra.numerateur = 11;


    cout << "Avant multiplication : " << fra.numerateur << " et " << fra.denominateur << endl;
    cout<< fra.numerateur << " et " << fra.denominateur;

    fra = multiplierParDeux(fra);

    cout<< fra.numerateur << " et " << fra.denominateur;
    cout << "Après multiplication : " << fra.numerateur << " et " << fra.denominateur << endl;


    return 0;
}





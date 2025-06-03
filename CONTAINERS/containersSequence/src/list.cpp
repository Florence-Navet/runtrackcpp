/**
 * @file array.cpp
 * @author enolaworld@gmail.com
 * @brief Description : Liste doublement chaînée.
*  Caractéristiques : Taille dynamique, éléments non contigus, 
* insertion et suppression efficaces n'importe où dans la liste.
*  - Très rapide pour ajouter ou supprimer des éléments au milieu de liste
*  - Lent pour atteindre le Nième élément
*  - Chaque élément aura connaissance de son prédécesseur et de son successeur
 * @version 0.1
 * @date 2025-06-03
 * 
 * @copyright Copyright (c) 2025
 * 
 */

#include <iostream>
#include <list>

int main() {
    std::list<int> lst = {1, 2, 3, 4, 5};

    auto it = lst.begin();
    std::advance(it, 2); // it pointe maintenant sur le 3e élément
    lst.insert(it, 99);  // insertion juste avant, donc après le 2e élément

    for (int i : lst) {
        std::cout << i << " ";
    }

    return 0;
}

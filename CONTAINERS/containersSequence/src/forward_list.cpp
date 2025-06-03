/**
 * @file array.cpp
 * @author enolaworld@gmail.com
 * @brief Description : Liste simplement chaînée.
* Caractéristiques : Taille dynamique, éléments non contigus, 
* insertion et suppression efficaces, mais uniquement à l'avant ou après un élément donné.
*  - Très rapide pour ajouter ou supprimer des éléments au milieu de liste
*  - Lent pour atteindre le Nième élément
*  - Chaque élément aura connaissance de son successeur uniquement
 * @version 0.1
 * @date 2025-06-03
 * 
 * @copyright Copyright (c) 2025
 * 
 */

#include <forward_list>
#include <iostream>

int main() {
    std::forward_list<int> flst = {1, 20, 3, 7, 5};
    flst.push_front(0); // Ajouter un élément au début
    for (int i : flst) {
        std::cout << i << " ";
    }
    return 0;
}


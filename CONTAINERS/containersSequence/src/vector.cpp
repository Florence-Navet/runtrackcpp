/**
 * @file array.cpp
 * @author enolaworld@gmail.com
 * @brief Description : Tableau dynamique pouvant changer de taille.
*   Caractéristiques : Taille dynamique, éléments contigus en mémoire, 
*   conçu pour que des éléments soient ajoutés à la fin
 * @version 0.1
 * @date 2025-06-03
 * 
 * @copyright Copyright (c) 2025
 * 
 */

#include <vector>
#include <iostream>

int main() {
    std::vector<int> vec = {1, 2, 3, 4, 5};
    vec.push_back(6); // Ajouter un élément à la fin
    for (int i : vec) {
        std::cout << i << " ";
    }
    return 0;
}
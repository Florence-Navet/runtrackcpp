/**
 * @file array.cpp
 * @author enolaworld@gmail.com
 * @brief DDescription : Tableau dynamique avec accès rapide aux deux extrémités.
*  Caractéristiques : Taille dynamique, éléments non nécessairement contigus,
*  insertion et suppression efficaces aux deux extrémités.
 * @version 0.1
 * @date 2025-06-03
 * 
 * @copyright Copyright (c) 2025
 * 
 */

#include <deque>
#include <iostream>

int main() {
    std::deque<int> deq = {1, 2, 5, 4, 15};
    deq.push_front(12);  // Ajouter un élément au début
    deq.push_back(6);   // Ajouter un élément à la fin
    for (int i : deq) {
        std::cout << i << " ";
    }
    return 0;
}
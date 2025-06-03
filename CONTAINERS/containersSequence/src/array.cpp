/**
 * @file array.cpp
 * @author enolaworld@gmail.com
 * @brief Description : Tableau à taille fixe, similaire aux tableaux en C.
*  Caractéristiques : Taille statique, éléments contigus en mémoire.
 * @version 0.1
 * @date 2025-06-03
 * 
 * @copyright Copyright (c) 2025
 * 
 */

#include <array>
#include <iostream>

int main() {
    std::array<int, 4> arr = {1, 2, 8, 4};
    for (int i : arr) {
        std::cout << i << " ";
    }
    return 0;
}
/**
 * @file array.cpp
 * @author enolaworld@gmail.com
 * @brief Description : Ensemble de clés non uniques, triées.
*  Caractéristiques : Clés non uniques, triées par défaut.
 * @version 0.1
 * @date 2025-06-03
 * 
 * @copyright Copyright (c) 2025
 * 
 */

#include <set>
#include <iostream>

int main() {
    std::multiset<int> myMultiset = {3, 1, 4, 1, 5};
    for (int i : myMultiset) {
        std::cout << i << " ";
    }
    return 0;
}
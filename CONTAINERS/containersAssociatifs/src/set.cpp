/**
 * @file array.cpp
 * @author enolaworld@gmail.com
 * @briefDescription : Ensemble de clés uniques, triées.
*  Caractéristiques : Clés uniques, triées par défaut.
 * @version 0.1
 * @date 2025-06-03
 * 
 * @copyright Copyright (c) 2025
 * 
 */

#include <set>
#include <iostream>

int main() {
    std::set<int> mySet = {3, 1, 4, 1, 5};
    for (int i : mySet) {
        std::cout << i << " ";
    }
    return 0;
}
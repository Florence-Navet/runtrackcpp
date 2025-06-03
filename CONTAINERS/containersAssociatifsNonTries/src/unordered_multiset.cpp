/**
 * @file array.cpp
 * @author enolaworld@gmail.com
 * @brief Description : Ensemble de clés non uniques, non triées.
* Caractéristiques : Clés non uniques, non triées.
 * @version 0.1
 * @date 2025-06-03
 * 
 * @copyright Copyright (c) 2025
 * 
 */


#include <unordered_set>
#include <iostream>

int main() {
    std::unordered_multiset<int> myMultiset = {3, 1, 4, 1, 5};
    for (int i : myMultiset) {
        std::cout << i << " ";
    }
    return 0;
}
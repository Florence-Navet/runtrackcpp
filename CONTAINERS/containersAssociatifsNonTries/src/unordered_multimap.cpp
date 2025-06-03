/**
 * @file array.cpp
 * @author enolaworld@gmail.com
 * @brief Description : Conteneur de paires clé-valeur, clés non uniques, non trié.
* Caractéristiques : Clés non uniques, non triées. Clés uniques, non triées.
 * @version 0.1
 * @date 2025-06-03
 * 
 * @copyright Copyright (c) 2025
 * 
 */

#include <unordered_map>
#include <iostream>

int main() {
    std::setlocale(LC_ALL, ".utf8");
    std::unordered_multimap<std::string, int> myMultimap = {{"Bernard", 10}, {"Bernard", 14}, {"Geneviève", 14}};
    for (const auto& pair : myMultimap) {
        std::cout << pair.first << ": " << pair.second << "\n";
    }
    return 0;
}
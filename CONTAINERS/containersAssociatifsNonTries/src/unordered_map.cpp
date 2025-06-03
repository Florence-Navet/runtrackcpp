/**
 * @file array.cpp
 * @author enolaworld@gmail.com
 * @brief Description : Conteneur de paires clé-valeur, clés uniques, non trié.
* Caractéristiques : Clés uniques, non triées.
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
    std::unordered_map<std::string, int> myMap = {{"Bernard", 10}, {"Geneviève", 14}};
    for (const auto& pair : myMap) {
        std::cout << pair.first << ": " << pair.second << "\n";
    }
    return 0;
}

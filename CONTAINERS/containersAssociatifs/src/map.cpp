/**
 * @file array.cpp
 * @author enolaworld@gmail.com
 * @brief Description : Conteneur de paires clé-valeur, trié par clé.
* Caractéristiques : Clés uniques, triées par défaut.
 * @version 0.1
 * @date 2025-06-03
 * 
 * @copyright Copyright (c) 2025
 * 
 */

#include <map>
#include <iostream>

int main() {
    std::setlocale(LC_ALL, ".utf8");
    std::map<std::string, int> myMap = {{"Bernard", 10}, {"Geneviève", 14}};
    for (const auto& pair : myMap) {
        std::cout << pair.first << ": " << pair.second << "\n";
    }
    return 0;
}
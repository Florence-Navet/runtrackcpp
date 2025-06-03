
/**
 * @file array.cpp
 * @author enolaworld@gmail.com
 * @brief Description : Conteneur de paires clé-valeur, clés non uniques, trié par clé.
 * Caractéristiques : Clés non uniques, triées par défaut.
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
    std::multimap<std::string, int> myMultimap = {{"Bernard", 10}, {"Bernard", 14}, {"Geneviève", 14}};
    for (const auto& pair : myMultimap) {
        std::cout << pair.first << ": " << pair.second << "\n";
    }
    return 0;
}
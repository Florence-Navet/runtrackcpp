/**
 * @file array.cpp
 * @author enolaworld@gmail.com
 * @brief Description : Pile (dernier entré, premier sorti) (ou LIFO Last In First Out)
* Caractéristiques : Ajout et suppression d'éléments à l'extrémité supérieure.
 * @version 0.1
 * @date 2025-06-03
 * 
 * @copyright Copyright (c) 2025
 * 
 */

#include <stack>
#include <iostream>

int main() {
    std::stack<int> myStack;
    myStack.push(10);
    myStack.push(30);
    myStack.push(20);

    while (!myStack.empty()) {
        std::cout << myStack.top() << " ";
        myStack.pop();
    }
    return 0;
}
/**
 * @file array.cpp
 * @author enolaworld@gmail.com
 * @brief Description : File d'attente (premier entré, premier sorti) (ou FIFO First In First Out)
* Caractéristiques : Ajout d'éléments à l'arrière, suppression d'éléments à l'avant.
 * @version 0.1
 * @date 2025-06-03
 * 
 * @copyright Copyright (c) 2025
 * 
 */

#include <queue>
#include <iostream>

int main() {
    std::queue<int> myQueue;
    myQueue.push(10);
    myQueue.push(20);
    myQueue.push(30);
    myQueue.push(8);

    while (!myQueue.empty()) {
        std::cout << myQueue.front() << " ";
        myQueue.pop();
    }
    return 0;
}
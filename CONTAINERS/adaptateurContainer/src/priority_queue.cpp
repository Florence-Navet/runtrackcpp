/**
 * @file array.cpp
 * @author enolaworld@gmail.com
 * @brief Description : File de priorité, les éléments de plus haute priorité sortent en premier.
* Caractéristiques : Les éléments sont triés par priorité, définie par défaut comme le plus grand en premier.
 * @version 0.1
 * @date 2025-06-03
 * 
 * @copyright Copyright (c) 2025
 * 
 */

#include <queue>
#include <iostream>

int main() {
    std::priority_queue<int> myPQueue;
    myPQueue.push(10);
    myPQueue.push(20);
    myPQueue.push(5);

    while (!myPQueue.empty()) {
        std::cout << myPQueue.top() << " ";
        myPQueue.pop();
    }
    return 0;
}
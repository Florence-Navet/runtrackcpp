#include <iostream>
#include <thread>
#include <mutex>
#include <vector>

std::mutex mtxFileData; // Déclaration du mutex
std::vector<char> fileData;

void functionA() {
    std::lock_guard<std::mutex> lock{mtxFileData}; // Verrouillage du mutex
    //Opération utilisant fileData;

}//Déverouillage automatique du mutex

void functionB() {
    mtxFileData.lock(); // Verrouillage du mutex
    //Opération utilisant fileData;
    mtxFileData.unlock(); // Déverrouillage du mutex
}

int main() {
    std::thread threadA(functionA);
    std::thread threadB(functionB)

    threadA.detach();
    threadB.join();

    return 0;
}
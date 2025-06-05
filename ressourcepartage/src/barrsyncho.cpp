#include <iostream>
#include <thread>
#include <vector>
#include <condition_variable>
#include <mutex>
#include <chrono>

// Variables globales
constexpr int chunkSize = 100000;
constexpr int totalFileSize = 1000000;
std::vector<char> fileData(totalFileSize);
bool downloadComplete = false; // Variable pour indiquer la fin du téléchargement
std::mutex mtxFileData; // Mutex pour protéger l'accès à fileData
std::condition_variable cv; // Condition variable pour synchronisation

// Fonction pour télécharger un morceau du fichier
int downloadChunk(int startIndex, int size = chunkSize) {
    std::thread::id id {std::this_thread::get_id()};
    // Simulate downloading a chunk of data from the internet
    std::this_thread::sleep_for(std::chrono::milliseconds(size/100));

    for (int i = 0; i < chunkSize; ++i) {
        fileData[startIndex + i] = 'X'; // Mark downloaded part
    }

    std::cout <<id<< " - Downloaded block: " << startIndex <<"-"<< startIndex+chunkSize << std::endl;

    return (startIndex+chunkSize);
}

int main() {
    std::barrier sync_point(10, [](){
        std::cout<<"Tous les morceaux ont ete telecharges....\n";
    });

    auto download_part = [&sync_point](int i){
        downloadChunk(i*chunkSize);
        sync_point.arrive_and_wait();
    };

    std::vector<std::jthread> threads;
    for(auto i = 0 ; i<totalFileSize ; i+=chunkSize){
        threads.emplace_back(downloadChunk, i, chunkSize);
    }
    return 0;
}
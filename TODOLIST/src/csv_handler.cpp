#include <fstream>
#include <iostream>
#include "csv_handler.hpp"

// Sauvegarder les tâches dans un fichier CSV
void saveToCSV(const std::vector<std::string> &tasks, const std::string &filename)
{
    std::ofstream file(filename);

    if (!file)
    {
        std::cerr << "Erreur : Impossible d'ouvrir le fichier pour l'écriture !" << std::endl;
        return;
    }

    for (const auto &task : tasks)
    {
        file << task << "\n";
    }

    file.close();
    std::cout << "Tâches sauvegardées dans " << filename << std::endl;
}

// Charger les tâches depuis un fichier CSV
std::vector<std::string> loadFromCSV(const std::string &filename)
{
    std::vector<std::string> tasks;
    std::ifstream file(filename);

    if (!file)
    {
        std::cerr << "Erreur : Impossible d'ouvrir le fichier pour la lecture !" << std::endl;
        return tasks;
    }

    std::string task;
    while (std::getline(file, task))
    {
        tasks.push_back(task);
    }

    file.close();
    std::cout << "Chargement des tâches depuis " << filename << std::endl;
    return tasks;
}

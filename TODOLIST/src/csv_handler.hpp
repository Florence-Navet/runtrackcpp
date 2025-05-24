#ifndef CSV_HANDLER_HPP
#define CSV_HANDLER_HPP

#include <vector>
#include <string>

// Définition de la structure
struct CSVHandler
{
};

// Fonctions associées
void saveToCSV(const std::vector<std::string> &tasks, const std::string &filename);
std::vector<std::string> loadFromCSV(const std::string &filename);

#endif

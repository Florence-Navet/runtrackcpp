#ifndef TODO_LIST_HPP
#define TODO_LIST_HPP

#include <vector>
#include <string>

struct Tache
{
    std::string nom;          // Nom ou titre de la tâche
    std::string description;  // Description de la tâche
    bool estTerminee = false; // Statut : terminée ou non
};

// Définition de la structure
struct TodoList
{
    std::vector<std::string> tasks; // Liste des tâches
};

// Fonctions associées
void addTask(TodoList &list, const std::string &task);
void removeTask(TodoList &list, int index);
void modifyTask(TodoList &list, int index, const std::string &newTask);
void displayTasks(const TodoList &list);

#endif

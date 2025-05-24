#include <iostream>
#include "todo_list.hpp"

// Ajouter une tâche à la liste
void addTask(TodoList &list, const std::string &task)
{
    list.tasks.push_back(task);
    std::cout << "Tâche ajoutée : " << task << std::endl;
}

// Supprimer une tâche par index
void removeTask(TodoList &list, int index)
{
    if (index >= 0 && index < list.tasks.size())
    {
        std::cout << "Suppression de la tâche : " << list.tasks[index] << std::endl;
        list.tasks.erase(list.tasks.begin() + index);
    }
    else
    {
        std::cout << "Index invalide, tâche introuvable." << std::endl;
    }
}

/**
 * @brief
 *
 * @param Modifier une tache existante
 * @param index
 * @param newTask
 */
// Modifier une tâche existante
void modifyTask(TodoList &list, int index, const std::string &newTask)
{
    if (index >= 0 && index < list.tasks.size())
    {
        std::cout << "Modification de la tâche " << index + 1 << " : " << list.tasks[index]
                  << " → " << newTask << std::endl;
        list.tasks[index] = newTask;
    }
    else
    {
        std::cout << "Index invalide, tâche introuvable." << std::endl;
    }
}

/**
 * @brief Listes les tâches en cours
 *
 * @param list
 */
void displayTasks(const TodoList &list)
{
    std::cout << "Liste des tâches : " << std::endl;
    for (size_t i = 0; i < list.tasks.size(); ++i)
    {
        std::cout << i + 1 << ". " << list.tasks[i] << std::endl;
    }
}
